//
// Created by Anna on 10/2/2023.
//

#ifndef M2OEP_ASREES_CHORE_H
#define M2OEP_ASREES_CHORE_H
#include "Roommate.h"
#include "Time.h"
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
    Time time; //has-a relationship with the passage of time
public:
    //constructor
    Chore();

    //getters
    /**
     * gets the user's chore name
     * takes in: nothing
     * @return string of chore name
     */
    string getChoreName();
    /**
     * gets the user's chore's point value
     * takes in: nothing
     * @return: int of the chore's point value
     */
    int getPointValue();
    /**
     * gets the expected chore frequency, which is what will determine the "lateness" of the chore
     * for the assigned roommate
     * takes in: nothing
     * @return: integer of the frequency expected, in days (so user input of 7 would mean weekly, for example)
     */
    int getFrequency();
    /**
     * gets the assigned roommate from the vector of roommates in the household
     * takes in: nothing
     * @return: roommate assigned
     */
    Roommate getRoommate(); //do i need this?

    //setters
    /**
     * sets the chore name value
     * @param chore is the user's string chore name
     * returns: nothing
     */
    void setChoreName(string chore);
    /**
     * Sets the chore's point value (how strenuous is the chore? the more strenuous, the higher the point value)
     * @param points the user's point value
     * returns: nothing
     */
    void setPointValue(int points);
    /**
     * sets the expected frequency of the chore, in days
     * @param frequency the user's desired chore frequency, in days
     * returns: nothing
     */
    void setFrequency(int frequency);
    /**
     * Sets the roommate assigned to the chore
     * @param roommates the roommate assigned
     * returns: nothing
     */
    void setRoommate(Roommate roommates);

    //randomize roommate
    /**
     * Takes in a vector of all the roommates and randomly chooses one to be assigned the chore
     * @param roommates vector of all the household's roommates
     * @return the randomly selected roommate from the vector
     */
    Roommate randomRoommate(vector<Roommate> roommates);

    /**
     * starts the time clock for the chore
     * restarts whenever a chore is checked off (option d)
     */
    void startTime();

    /**
     * timeCheck uses the time class to assess how long it has been since the chore has been assigned
     * if the time passed is greater than the frequency, the roommate assigned's lateness val flips to true
     */
    void timeCheck();

    //get Chore Info from user
    /**
     * Collects the user's desired input values for the chore object
     * takes in: nothing
     * returns: nothing
     */
    void getInfo();
    //output file
    /**
     * output file for the chore's information, including the roommate assigned to it and its point value
     * takes in: nothing
     * returns: nothing
     */
    void outfile();

    friend bool operator == (const Chore&lhs, const Chore &rhs);

};
#endif //M2OEP_ASREES_CHORE_H
