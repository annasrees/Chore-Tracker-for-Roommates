//
// Created by Anna on 9/7/2023.
//
#include "Game.h"
#include "Time.h"
#include "Roommate.h"
#include "Chore.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
using namespace std;
/**
 * To be completed:

 * TODO: change choreList and roomMate list to just be list of names!!!
 * @return
 */

int main() {
    //start page
    Game game;
    game.printHomeScreen();
    Chore newChore; //in the event of adding a chore ('c')
    Roommate newRoommate; //in the event of adding a new roommate ('n')
    Roommate assignedRoommate; //roommate assigned to x chore
    vector<Chore> choreList;
    vector<Roommate> roommateList;
    vector<string> roommateNameList;
    string input;
    //Time time;

    //start the time
    //time.setStartTime();

    //get householdname
    string houseName = game.getHouseholdName();
    cout << "Welcome " << houseName << "!" << endl;

    //initial cout statement to tell user to add a new roommate first
    cout << "First, type 'n' to add a roommate to the household." << endl;
    //get user choice
    char choice = game.getPlayerChoice(cout, cin);

    //outfile which holds the chores and when they're due
    //TODO: get this file out of the cmake-build!!!!! rah
    ofstream outputFile("ChoreOutput.txt");
    outputFile << setw(10) << left << "Chore" << "|" << setw(5) << left << "Points" << "|" << setw(10) << left << "Roommate Assigned" << "|" << endl;
    while (choice != 'e') {
        switch(choice) {
            case 'c':
                //gather the new chore info
                newChore.getInfo();
                cout << "Your new chore: " << endl;
                cout << "Chore name: " << newChore.getChoreName() << endl;
                cout << "Chore points: " << newChore.getPointValue() << endl;
                cout << "Chore frequency: every " << newChore.getFrequency() << " day(s)" << endl;
                newChore.startTime(); //starts the clock for this chore

                //add chore to chore list
                choreList.push_back(newChore);

                //assign a roommate to the chore:
                assignedRoommate = newChore.randomRoommate(roommateList);
                cout << assignedRoommate.getName() << " has been assigned to the new chore: " << newChore.getChoreName() << endl;
                newChore.outfile(); //send new chore's info to outfile
                outputFile.close();
                choice = game.getPlayerChoice(cout, cin);
                break;
            case 'd':
                //a chore has been accomplished
                if(choreList.empty()) {
                    cout << "There are no chores in the list. Type 'c' to add a chore!" << endl;

                }
                else{
                    cout << "Who completed this chore? " << endl;
                    getline(cin, input);

                    vector<string>::iterator it;
                  //  it = find(roommateNameList.begin(), roommateNameList.end(), cin);
                    while ((cin.fail()) || input.empty()/* || it == roommateList.end()*/) {
                        cin.clear();
                        cout << "Hmm.. couldn't find that roommate. Enter a roommate: " << endl;
                        getline(cin, input);

                    }
                    cout << "What chore have they completed? " << endl;
                    getline(cin, input);
                   // it = find(choreList.begin(), choreList.end(), cin);
                    while ((cin.fail()) || input.empty()/* || it == choreList.end()*/) {
                        cin.clear();
                        cout << "Hmm.. couldn't find that chore. Enter your finished chore: " << endl;
                        getline(cin, input);

                    }



                }
                choice = game.getPlayerChoice(cout, cin);
                break;
            case 'n':
                //add a roommate to the household
                newRoommate.getInfo();
                cout << "New roommate's name: " << newRoommate.getName() << endl;
                cout << "Their points : " << newRoommate.getPoints() << endl;
                roommateList.push_back(newRoommate);
                roommateNameList.push_back(newRoommate.getName());
                choice = game.getPlayerChoice(cout, cin);
                break;
            case 'i':
                //information
                game.getInfo();
                choice = game.getPlayerChoice(cout, cin);
                break;
        }
        //checking the time for each chore to make sure none of them are late
        for (int i = 0; i < choreList.size(); i++){
            choreList[i].timeCheck();
            if (choreList[i].getRoommate().getLate() == true) {
                cout << choreList[i].getRoommate().getName() << " is late on their chore!" << endl;
            }
        }
    }
    return 0;
}
