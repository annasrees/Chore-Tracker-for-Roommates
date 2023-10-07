//
// Created by Anna on 9/6/2023.
//
#include "Chore.h"
#include "Roommate.h"
#include "Time.h"
#include <iostream>
#include <random>
#include <fstream>
#include <iomanip>
using namespace std;

/** Chore class
 * getInfo method generates the user input to populate the other methods.
 * Chores have a name, point value, and frequency. The point value and frequency are decided by the user,
 * and the point value should increase for more arduous tasks (for example, 1 point to take out the trash. 3 points to deep clean the fridge"
 * Frequency should be in days (how many days between doing it, so every day would be 1 and every week would be 7)
 * */
Chore::Chore() {}

string Chore::getChoreName() {
    return choreName;
}

int Chore::getPointValue() {
    return pointValue;
}

int Chore::getFrequency() {
    return frequency;
}

Roommate Chore::getRoommate() {
    return roommateAssigned;
}

void Chore::setChoreName(string chore) {
    choreName = chore;
}

void Chore::setPointValue(int points) {
    pointValue = points;
}

void Chore::setFrequency(int frequency) {
    frequency = frequency;
}

void Chore::setRoommate(Roommate roommate) {
    roommateAssigned = roommate;
}

Roommate Chore::randomRoommate(vector<Roommate> roommates) {
    vector<Roommate> roommatesVec = roommates;
    int index = rand() % roommatesVec.size(); //get index of the assigned roommate
    Roommate assignedRoommate = roommatesVec[index];
    return assignedRoommate;
}

void Chore::startTime() {
    time.setStartTime();
}

void Chore::timeCheck() {
    double passedTime = time.getElapsedTime();
    if (passedTime > frequency) {
        roommateAssigned.setLate(true);
    }
}

void Chore::getInfo() {
    stringstream ss;
    int integer;
    //chore name
    cin.clear();
    ss.clear();
    cout << "What is the chore called?" << endl;
    getline(cin, choreName);
    while ((cin.fail()) || choreName.empty()) {
        cin.clear();
        cout << "No input. Enter your chore: " << endl;
        getline(cin, choreName);

    }
    this -> setChoreName(choreName);

    //point value
    cout << "How many points should this chore be worth? The harder the chore, the more points: " << endl;
    cin.clear();
    ss.clear();
    cin >> pointValue;
    ss << pointValue;
    ss >> integer;
    while ((ss.fail()) || (cin.get() != '\n')) {
        cin.clear();
        //ss.str(""); //empty out the string buffer
        ss.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Enter a number:" << endl;
        cin >> pointValue;
        ss << pointValue;
        ss >> integer;
    }
    this ->setPointValue(pointValue);

    //frequency of chore
    cin.clear();
    ss.clear();
    cout << "How often should this chore get done? Every [integer] day(s):" << endl;
    cin >> frequency;
    ss << frequency;
    ss >> integer;
    while (ss.fail() || (cin.get() != '\n')) {
        cin.clear();
        //ss.str(""); //empty out the string buffer
        ss.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Enter a number:" << endl;
        cin >> frequency;
        ss << frequency;
        ss >> integer;
    }
    this -> setFrequency(frequency);

}

void Chore::outfile() {
    ofstream outputFile("ChoreOutput.txt");
    //outputFile << setw(10) << left << "Chore" << "|" << setw(5) << left << "Points" << "|" << setw(10) << left << "Roommate Assigned" << "|" << endl;
    outputFile << setw(10) << left << this->choreName << "|" << setw(5) << left << this->pointValue << "|" << setw(10) << roommateAssigned.getName() << "|" << endl;
    outputFile.close();
}

bool operator == (const Chore &lhs, const Chore &rhs) {
    return lhs.choreName == rhs.choreName;
}
