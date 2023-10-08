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
    /**
     * Gets the roommate's name
     * takes in: nothing
     * @return string of the roommate's name
     */
    string getName();
    /**
     * Gets the roommate's point score
     * takes in: nothing
     * @return int of the roommate's point score (how many chores they have accomplished)
     */
    int getPoints();
    /**
     * If the roommate is behind on chores, this will return true and the roommate will be "late"
     * takes in: nothing
     * @return: bool value of lateness
     */
    bool getLate();

    //setters
    /**
     * Sets the roommate's name
     * @param newName takes in: the desired name (string)
     * returns: nothing
     */
    void setName(string newName);
    /**
     * Sets the points the roommate is at
     * @param newPoints the desired point value (int)
     * returns: nothing
     */
    void setPoints(int newPoints);
    /**
     * Sets the roommate's lateness
     * @param newLate the desired late bool (true = the roommate is late on a chore,
     * false = the roommate is not late on a chore)
     */
    void setLate(bool newLate);

    /**
     * collects user info for roommate
     * takes in: nothing
     * returns: nothing
     */
    void getInfo();
    /**
     * prints the roommate's point tally
     * takes in: nothing
     * returns: nothing
     */
    void printPoints();

    /**
     * overloaded operators - especially used in testing.cpp
     * @param lhs left hand side
     * @param rhs right hand side
     * @return
     */
    friend bool operator == (const Roommate &lhs, const Roommate &rhs);
    friend bool operator != (const Roommate &lhs, const Roommate &rhs);
};
#endif //M2OEP_ASREES_ROOMMATE_H
