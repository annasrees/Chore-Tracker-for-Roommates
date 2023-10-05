//
// Created by Anna on 9/6/2023.
//

#include "Roommate.h"
#include <iostream>
#include <vector>
using namespace std;


/** Roommate class
 * getInfo method generates the user input to populate the other methods.
 * Roommates have a name given by the user, and are initially set to have 0 points and to not be late on their chores
 * As a roommate completes a chore, their points will increase.
 * */;
Roommate::Roommate() {}

string Roommate::getName() {
    return name;
}

int Roommate::getPoints() {
    return points;
}

bool Roommate::getLate() {
    return late;
}


void Roommate::setName(string newName) {
    name = newName;
}

void Roommate::setPoints(int newPoints) {
    points = newPoints;
}

void Roommate::setLate(bool newLate) {
    late = newLate;
}

void Roommate::getInfo() {
   string roommateName;
   int initialPoints = 0; //roommate has no points
   bool initialLate = false; //roommate is not late on chores
   cout << "What is this roommate's name? " << endl;
   getline(cin, roommateName);
    while ((cin.fail()) || roommateName.empty()) {
        cin.clear();
        cout << "No input. Enter your roommate's name: " << endl;
        getline(cin, roommateName);

    }
    this -> setName(roommateName);
    this -> setPoints(initialPoints);
    this ->setLate(initialLate);
}

void Roommate::printPoints() {
    cout << this->getName() << "'s total points: " << this->getPoints() << endl;
}

bool operator == (const Roommate &lhs, const Roommate &rhs) {
    return lhs.name == rhs.name;
}