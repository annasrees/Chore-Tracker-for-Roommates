//
// Created by Anna on 10/2/2023.
//

#ifndef M2OEP_ASREES_CHORE_H
#define M2OEP_ASREES_CHORE_H
#include "Roommate.h"
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


class Chore {
private:
    string choreName;
    int pointValue;
    int frequency; //times assigned per week
    Roommate roommateAssigned; //has-a relationship with roommate
public:
    //constructor
    Chore();

    //getters
    string getChoreName();
    int getPointValue();
    int getFrequency();
    Roommate getRoommate(); //do i need this?

    //setters
    void setChoreName(string chore);
    void setPointValue(int points);
    void setFrequency(int frequency);
    void setRoommate(Roommate roommates);

    //randomize roommate
    Roommate randomRoommate(vector<Roommate> roommates);
    //get Chore Info from user
    void getInfo();

};
#endif //M2OEP_ASREES_CHORE_H
