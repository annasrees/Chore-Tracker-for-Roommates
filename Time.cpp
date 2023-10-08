//
// Created by annas on 10/4/2023.
//
#include "Time.h"
using namespace std;

Time::Time() {}

void Time::setStartTime() {
    startTime = time(nullptr);
}

time_t Time::getStartTime() {
    return startTime;
}

double Time::getElapsedTime() {
    elapsedTime = time(nullptr);
    double secondDifference = (elapsedTime - startTime);
    double hourDifference = (secondDifference / 3600);
    double dayDifference = (hourDifference / 24);
    return dayDifference;
}