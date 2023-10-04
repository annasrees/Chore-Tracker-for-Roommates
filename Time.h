//
// Created by annas on 10/4/2023.
//

#ifndef M2OEP_ASREES_TIME_H
#define M2OEP_ASREES_TIME_H
#include <ctime>
using namespace std;
/**
 * This class keeps track of the amount of time that has passed since the program began running
 */
class Time{
private:
    time_t startTime;
    time_t elapsedTime;
public:
    /**
     * constructor
     */
     Time();
    /**
     * sets the current time as the start time
     * takes in: nothing
     * returns: startTime
     */
     void setStartTime();
     /**
      * when this func is called, it returns the amount of time passed since starting to run the
      * program in DAYS, since this is how the chores are counted for lateness
      * takes in: nothing
      * returns: double of the amount of days passed since starting the program
      */
      double getElapsedTime();
};
#endif //M2OEP_ASREES_TIME_H
