//
// Created by Anna on 9/6/2023.
//
#include "Game.h"
#include <iostream>
#include <limits>
#include <fstream>
using namespace std;
/**
 * The Game class manages functionality of the game features, such as the household name, the options and menu screens,
 * the information screens, and getting the player choice
 *
 * has component classes Chore and Roommate; these are aspects of the program game
 */

Game::Game() {}

void Game::printHomeScreen() const {
    cout << "Welcome to the Household!" << endl;
    cout << "_________________________\n" << endl;

}

string Game::getHouseholdName() {
    cout << "What is your household's name? " << endl;
    getline(cin, householdName);
    while (cin.fail()) {
        cout << "Invalid input. Enter a name for your household: " << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> householdName;
    }
    return householdName;
}

void Game::printOptions(ostream &outs) {
    outs << "Press (c) to add a chore to the list, (d) to check off a chore, (n) to add a roommate, (i) for information,"
            " or (e) to exit: ";
}

char Game::getPlayerChoice(ostream &outs, istream &ins) {
    char choice;
    printOptions(outs);
    ins >> choice;
    while ((ins.fail()) || (ins.peek() != '\n' || (choice != 'c' && choice != 'd' && choice != 'n' && choice != 'i' && choice != 'e'))) {
        cout << "Invalid option " << endl;
        ins.clear();
        ins.ignore(numeric_limits<streamsize>::max(), '\n');
        printOptions(outs);
        ins >> choice;
        choice =  tolower(choice);
    }
    return choice;

}

void Game::addToChoreList(Chore chore, Chore pointValue) {
    choreList.push_back(chore);
}

void Game::getInfo() {
    cout << "This program is a chore tracker to help keep household members on top of their responsibilities." << endl;
    cout << "You will have 5 options to interact with this program: \n______________________________________________\n" << endl;
    cout << "1.) (c) Will take you through adding a chore to your list. You can assign a point value to the chore "
            "depending on how intensive the chore is. For example, the dishes may be 1 point, while deep cleaning the "
            "fridge may be 3 points. You can also tell the program how often this chore should be done, in days. The "
            "dishes may need to be done every 1 day(s) while deep cleaning the fridge may need to be done every 7 "
            "day(s), for example. \n" << endl;
    cout << "2.) (d) Will allow you to check off a chore once it is completed. You can indicate who did the chore, and "
            "what chore they did.This will give that roommate the points associated with the chore.\n" << endl;
    cout << "3.) (n) Will allow you to add a roommate to your household. Each roommate will be randomly assigned chores, "
            "and added to the points leaderboard.\n"<< endl;
    cout << "4.) (i) You are currently in the Information section, where the functionality of this program is outlined.\n" << endl;
    cout << "5.) (e) Will allow you to end the program and close the chore tracker. Be careful, as exiting the program "
            "means your points and chore list will be lost!" << endl;
    cout << "___________________________________________________________________________________________________________\n" << endl;
}

void Game::gameFile() {
    //TODO: write an output file which prints out the roommate scoreboard and the to-do list for all the roommates
    ofstream outputFile("ChoreOutput.txt");
    outputFile << "";

    outputFile.close();

}



