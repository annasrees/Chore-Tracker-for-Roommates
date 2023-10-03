// asrees
#include <iostream>
#include <vector>
using namespace std;

/**
* Calculate Stats function
* Calculates the maximum, minimum, and average of a vector of doubles.
* Modifies max, min, average.
* If data is empty, sets max, min, and average to 0.
*/
void calculateStats(const vector<double> &data, double &max, double &min, double &average);

bool testCalculateStats();

int main() {
    if (testCalculateStats()){
        cout << "passed all cases" << endl;
    }
    return 0;
}

bool testCalculateStats() {
    bool passed = true;
    vector<double> data = {1};
    double max = 0, min = 0, avg = 0;
    calculateStats(data, max, min, avg);
    if (max != 1 || min != 1 || avg != 1) {
        cout << "Failed {1} test case" << endl;
        passed = false;
    }

    data = {1, 2, 3};
    max = 0, min = 0, avg = 0;
    calculateStats(data, max, min, avg);
    if (max != 3 || min != 1 || avg != 2) {
        cout << "Failed {1, 2, 3} test case" << endl;
        passed = false;
    }

    data = {-1, 2, 3, 4};
    max = 0, min = 0, avg = 0;
    calculateStats(data, max, min, avg);
    if (max != 4 || min != -1 || avg != 2) {
        cout << "Failed {1, 2, 3} test case" << endl;
        passed = false;
    }

    data = {0, 2, 3, 4};
    max = 0, min = 0, avg = 0;
    calculateStats(data, max, min, avg);
    if (max != 4 || min != 0 || avg != 2.25) {
        cout << "Failed {1, 2, 3} test case" << endl;
        passed = false;
    }

    data = {-1};
    max = 0, min = 0, avg = 0;
    calculateStats(data, max, min, avg);
    if (max == 0 || min == 0 || avg == 0) {
        cout << "Failed {1, 2, 3} test case" << endl;
        passed = false;
    }

    data = {};
    max = 1, min = 1, avg = 1;
    calculateStats(data, max, min, avg);
    if (max != 0 || min != 0 || avg != 0) {
        cout << "Failed {1, 2, 3} test case" << endl;
        passed = false;
    }
    return passed;
}