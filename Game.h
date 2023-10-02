//
// Created by Anna on 10/2/2023.
//

#ifndef M2OEP_ASREES_GAME_H
#define M2OEP_ASREES_GAME_H
#include <iostream>
#include "Chore.h"
#include <vector>
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
    Game() : chore(), roommate() {}
    void printHomeScreen() const;
    string getHouseholdName();
    void printOptions (ostream &outs);
    char getPlayerChoice(ostream &outs, istream &ins);
    void addToChoreList(Chore chore, Chore pointValue);
    void getInfo();

};
#endif //M2OEP_ASREES_GAME_H
