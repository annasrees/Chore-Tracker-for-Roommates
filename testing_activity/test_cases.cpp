// asrees
#include <iostream>
using namespace std;

/**
* Triangle type function
* Requires: nothing
* Modifies: nothing
* Effects: Returns whether the triangle formed from the given side lengths is
* "equilateral", "isosceles", "scalene", or "not_a_triangle".
*/
string triangle_type(int side1, int side2, int side3);

bool test_triangle_type();

int main() {
    if (test_triangle_type()) {
        cout << "Passed all test cases!" << endl;
    }
    return 0;
}

bool test_triangle_type() {
    bool passed = true;


    if (triangle_type(2, 2, 4) != "not_a_triangle") {
        cout << "FAILED 2, 2, 10 (forming triangle) test case." << endl;
        passed = false;
    }
    if (triangle_type(-1, 2, 10) != "not_a_triangle") {
        cout << "FAILED 2, 2, 10 (forming triangle) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 2, 10) != "not_a_triangle") {
        cout << "FAILED 2, 2, 10 (forming triangle) test case." << endl;
        passed = false;
    }
    if (triangle_type(0, 2, 2) != "not_a_triangle") {
        cout << "FAILED 0, 2, 3 (not a triangle) test case." << endl;
        passed = false;
    }
    if (triangle_type(0, 0, 0) != "not_a_triangle") {
        cout << "FAILED 0, 2, 3 (not a triangle) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 2, 2) == "not_a_triangle") {
        cout << "FAILED 0, 2, 3 (not a triangle) test case." << endl;
        passed = false;
    }
    if (triangle_type(3, 2, 2) == "not_a_triangle") {
        cout << "FAILED 0, 2, 3 (not a triangle) test case." << endl;
        passed = false;
    }
    if (triangle_type(-1, 2, 3) != "not_a_triangle") {
        cout << "FAILED 0, 2, 3 (not a triangle) test case." << endl;
        passed = false;
    }


    if (triangle_type(-1, -1, -1) == "equilateral") {
        cout << "FAILED -1, -1, -1 (equilateral) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 2, 2) != "equilateral") {
        cout << "FAILED 2, 2, 2 (equilateral) test case." << endl;
        passed = false;
    }
    if (triangle_type(0,0,0) == "equilateral") {
        cout << "FAILED 1,1,1 (equilateral) test case." << endl;
        passed = false;
    }
    if (triangle_type(1, 2, 2) == "equilateral") {
        cout << "FAILED 2, 2, 2 (equilateral) test case." << endl;
        passed = false;
    }
    if (triangle_type(1, 2, 3) == "equilateral") {
        cout << "FAILED 2, 2, 2 (equilateral) test case." << endl;
        passed = false;
    }

    if (triangle_type(-1, 2, 2) == "isosceles") {
        cout << "FAILED -1, 2, 2 (isosceles) test case." << endl;
        passed = false;
    }
    if (triangle_type(3, 2, 2) != "isosceles") {
        cout << "FAILED 3, 2, 2 (isosceles) test case." << endl;
        passed = false;
    }
    if (triangle_type(1, 2, 2) != "isosceles") {
        cout << "FAILED 1, 2, 2 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(10, 2, 2) == "isosceles") {
        cout << "FAILED 1, 2, 2 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 2, 2) == "isosceles") {
        cout << "FAILED 1, 2, 2 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(1, 2, 3) == "isosceles") {
        cout << "FAILED 1, 2, 2 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 2, 3) != "isosceles") {
        cout << "FAILED 1, 2, 2 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 3, 2) != "isosceles") {
        cout << "FAILED 1, 2, 2 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(1, 3, 2) == "isosceles") {
        cout << "FAILED 1, 2, 2 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(4, 2, 2) == "isosceles") {
        cout << "FAILED 1, 2, 2 (scalene) test case." << endl;
        passed = false;
    }


    if (triangle_type(1, 2, 3) != "scalene") {
        cout << "FAILED 1, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(-1, 2, 3) == "scalene") {
        cout << "FAILED -1, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(10, 2, 3) == "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(1, 2, 2) == "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 2, 2) == "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(3, 2, 1) != "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 1, 3) != "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 3, 1) != "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(3, 1, 2) != "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(4, 1, 3) == "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(0, 1, 3) == "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }
    if (triangle_type(2, 3, 4) != "scalene") {
        cout << "FAILED 10, 2, 3 (scalene) test case." << endl;
        passed = false;
    }

    //test if triangle
    //2 sides must add > third side
    return passed;
}