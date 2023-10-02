//
// Created by Anna on 10/2/2023.
//

#ifndef M2OEP_ASREES_ROOMMATE_H
#define M2OEP_ASREES_ROOMMATE_H
#include <vector>
#include <string>

using namespace std;

class Roommate {
private:
    //fields
    string name;
    int points;
    bool late;


public:
    //default constructor
    Roommate();

    //getters
    string getName();
    int getPoints();
    bool getLate();

    //setters
    void setName(string newName);
    void setPoints(int newPoints);
    void setLate(bool newLate);

    //collects user info for roommate
    void getInfo();
    //print roommate's points
    void printPoints();
};
#endif //M2OEP_ASREES_ROOMMATE_H
