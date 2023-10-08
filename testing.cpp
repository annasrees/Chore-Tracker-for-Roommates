//
// Created by annas on 10/7/2023.
//
#include "Game.h"
#include "Chore.h"
#include "Roommate.h"
#include "Time.h"

bool testRoommate();
bool testChore();
bool testTime();

int main() {
    if (testChore()) {
        cout << "Passed all chore tests" << endl;
    }
    if (testRoommate()) {
        cout << "Passed all roommate tests" << endl;
    }
    if (testTime()) {
        cout << "Passed all time tests" << endl;
    }
}

bool testRoommate() {
    bool passed = true;
    //test constructor
    Roommate roommate;
    if (roommate.getPoints() != 0 || roommate.getLate()) {
        cout << "Roommate constructor test failed" << endl;
        passed = false;
    }
    //test get/set name
    roommate.setName("Joe Schmo");
    if (roommate.getName() != "Joe Schmo") {
        cout << "Roommate getName and setName test failed" << endl;
        passed = false;
    }
    //test late
    roommate.setLate(true);
    if (!(roommate.getLate())) {
        cout << "Roommate Late test failed" << endl;
        passed = false;
    }
    //test points
    roommate.setPoints(10);
    if(roommate.getPoints() != 10) {
        cout << "Roommate Points test failed" << endl;
        passed = false;
    }
    return passed;
}

bool testChore() {
    bool passed = true;
    Chore chore;
    chore.setChoreName("nameTest");
    if (chore.getChoreName() != "nameTest") {
        cout << "Chore getName and setName test failed" << endl;
        passed = false;
    }
    chore.setFrequency(1);
    if (chore.getFrequency() != 1) {
        cout << "Chore getFrequency and setFrequency test failed" << endl;
        passed = false;
    }
    chore.setPointValue(1);
    if (chore.getPointValue() != 1) {
        cout << "Chore getPointValue and setPointValue test failed" << endl;
        passed = false;
    }
    Roommate testRoommate;
    chore.setRoommate(testRoommate);
    if (chore.getRoommate() != testRoommate) {
        cout << "Chore roommate assignment test failed" << endl;
        passed = false;
    }
    return passed;

}

bool testTime() {
    bool passed  = true;
    Time timeTest;
    timeTest.setStartTime();
    time_t currentTime = time(nullptr);
    if (timeTest.getStartTime() != currentTime) {
        cout << "time test start time test failed" << endl;
        passed = false;
    }
    return passed;
}