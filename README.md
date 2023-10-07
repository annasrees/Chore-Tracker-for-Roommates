# M2OEP-asrees

## Inheritance Class Relationship

## Component class relationship

There are several classes in this project which use component class relationships with each other 

**Chore Class** has-a Roommate and has-a time 
- The roommate component of the Chore class is the roommate assigned to the chore. The chore class also randomly chooses a roommate from a vector of roommates to be assigned to the chore
- The time component of the chore class keeps the time of the chore. From when it is first added to the list of things to-do (by the user) to when it is checked off the list (by the user), the time is kept to manage whether the assigned roommate is late on their chores

**Game class** has-a Roommate and has-a Chore
- The game class manages the game functionality of this program. It takes in the user's new chore description or new roommate description, and adds it to a vector of chore or roommate objects to manage who is in the household and what is intended to be done.
## File input/output