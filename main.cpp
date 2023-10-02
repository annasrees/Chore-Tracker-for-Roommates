//
// Created by Anna on 9/7/2023.
//
#include "Game.h"
#include "Roommate.h"
#include "Chore.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
using namespace std;
/**
 * To be completed:
 * TODO: input validate to find roommate in roommateList
 * TODO: input validate to find chore in choreList
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
    string input;

    //get householdname
    string houseName = game.getHouseholdName();
    cout << "Welcome " << houseName << "!" << endl;

    //initial cout statement to tell user to add a new roommate first
    cout << "First, type 'n' to add a roommate to the household." << endl;
    //get user choice
    char choice = game.getPlayerChoice(cout, cin);
    ofstream outputFile("ChoreOutput.txt");
    outputFile << setw(10) << left << "Chore" << "|" << setw(5) << left << "Points" << "|" << setw(10) << left << "Roommate Assigned" << "|" << endl;
    while (choice != 'e') {
        switch(choice) {
            case 'c':
                newChore.getInfo();
                cout << "Your new chore: " << endl;
                cout << "Chore name: " << newChore.getChoreName() << endl;
                cout << "Chore points: " << newChore.getPointValue() << endl;
                cout << "Chore frequency: every " << newChore.getFrequency() << " day(s)" << endl;
                //add chore to chore list
                choreList.push_back(newChore);
                //assign a roommate to the chore:
                assignedRoommate = newChore.randomRoommate(roommateList);
                cout << assignedRoommate.getName() << " has been assigned to the new chore: " << newChore.getChoreName() << endl;
                newChore.outfile(); //send new info to outfile
                outputFile.close();
                choice = game.getPlayerChoice(cout, cin);
                break;
            case 'd':
                //a chore has been accomplished
                if(choreList.size() == 0) {
                    cout << "There are no chores in the list. Type 'c' to add a chore!" << endl;

                }
                else{
                    cout << "Who completed this chore? " << endl;
                    getline(cin, input);
                    while ((cin.fail()) || input.empty()) {
                        cin.clear();
                        cout << "No input. Enter a sentence: " << endl;
                        getline(cin, input);

                    }
                    cout << "What chore have they completed? " << endl;
                    getline(cin, input);
                    while ((cin.fail()) || input.empty()) {
                        cin.clear();
                        cout << "No input. Enter a sentence: " << endl;
                        getline(cin, input);

                    }

                    cout << "Good job!" << endl;

                }
                choice = game.getPlayerChoice(cout, cin);
                break;
            case 'n':
                //add a roommate to the household
                newRoommate.getInfo();
                cout << "New roommate's name: " << newRoommate.getName() << endl;
                cout << "Their points : " << newRoommate.getPoints() << endl;
                roommateList.push_back(newRoommate);
                choice = game.getPlayerChoice(cout, cin);
                break;
            case 'i':
                //information
                game.getInfo();
                choice = game.getPlayerChoice(cout, cin);
                break;
        }
    }
    return 0;
}
