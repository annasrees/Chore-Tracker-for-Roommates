//
// Created by Anna on 10/2/2023.
//

#ifndef M2OEP_ASREES_GAME_H
#define M2OEP_ASREES_GAME_H
#include <iostream>
#include "Chore.h"
#include <vector>
/**
 * The purpose of the game file is to take in and manage all game interface functions
 */
using namespace std;
class Game {
private:
    string householdName;
    char userChoice;
    vector<Chore> choreList;
    Chore chore;
    Roommate roommate;
public:
    //constructor
    Game();
    /**
     * prints a welcome message home screen
     * takes in: nothing
     * returns: nothing
     */
    void printHomeScreen() const;
    /**
     * user provides their household name
     * takes in: nothing
     * @return: string of household name
     */
    string getHouseholdName();
    /**
     * prints the user options for each round
     * takes in: outs (ostream)
     * returns: nothing
     * @param outs
     */
    void printOptions (ostream &outs);
    /**
     * prompts the user to make a selection and provides said user selection
     * @param outs (ostream)
     * @param ins  (istream)
     * @return: character the user chose from the options
     */
    char getPlayerChoice(ostream &outs, istream &ins);
    /**
     * On an "add a chore" turn (user selects "c"), Takes the user's given chore and adds it
     * to the list of chores to do
     * @param chore the user's chore name
     * @param pointValue the user's chore's point value
     * returns: nothing
     */
    void addToChoreList(Chore chore, Chore pointValue);
    /**
     * prints a menu of information about the program and what it does
     * takes in: nothing
     * returns: nothing
     */
    void getInfo();
    /**
     * Sends the point scoreboard out to an output file
     * takes in: nothing
     * returns: nothing
     */
    void gameFile();

};
#endif //M2OEP_ASREES_GAME_H
