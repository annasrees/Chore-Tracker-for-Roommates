# M2OEP-asrees
### Anna Rees

## Summary of the Program
The goal of this program is to be a chore tracker for a household
The household (the user) can indicate how many roommate they have and give them all names, and the user can input the chores they would like to have cycled through all the roommates, the frequency each chore should be completed (in days), and a point value for how intensive the chore is. 
The program then assigns each chore a roommate and uses the time library to manage how much time has passed since the roommate has been assigned the chore. If the roommate waits to check off the chore longer than the frequency of the chore indicated, they will be marked late.

# Module 2 Concepts Used
## Component class relationship
There are several classes in this project which use component class relationships with each other 

**Chore Class** has-a Roommate and has-a Time 
- The roommate component of the Chore class is the roommate assigned to the chore. The chore class also randomly chooses a roommate from a vector of roommates to be assigned to the chore
- The time component of the chore class keeps the time of the chore. From when it is first added to the list of things to-do (by the user) to when it is checked off the list (by the user), the time is kept to manage whether the assigned roommate is late on their chores

**Game class** has-a Roommate and has-a Chore
- The game class manages the game functionality of this program. It takes in the user's new chore description or new roommate description, and adds it to a vector of chore or roommate objects to manage who is in the household and what is intended to be done.

## File Input/Output
**ChoreOutput.txt** in the chore class and in main
- the outFile() method in Chore class sends the chore data to the ChoreOutput.txt file and lists the chore, the point value, and the roommate assigned to the chore. 

## Known Bugs
- There is a runtime error where when a user is given a prompt, it automatically defaults to having a no input validation error, and it alerts the user of no input. This does not effect the functionality of the program

## Grading
- I believe my program is appropriately complex, uses many concepts from module 2, and validates all user input (40 pts)
- There are 2 classes which each contain have 2 has-a class relationships with other classes. I believe these class relationships are designed well, implemented robustly and used in the main program in a way that makes sense. Depending on how these are intended to be divided up grade-wise, I believe I have earned full points for each of these relationships (2 or 4 relationships, depending on how you are grading it therefore 40-80 pts) 
- There is 1 output file implemented in this program, and I believe it is designed well and implemented in a way that makes sense (5 pts)
- I have added more robust comments since module 1, and I believe the documentation is clearly organized (0 pts)
- Testing program?? (20 pts)


