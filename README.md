# Chore Tracker for Roommates Program
### Anna Rees
#### Fall 2023

## Summary of the Program
The goal of this program is to be a chore tracker for a household
The household (the user) can indicate how many roommate they have and give them all names, and the user can input the chores they would like to have cycled through all the roommates, the frequency each chore should be completed (in days), and a point value for how intensive the chore is. 
The program then assigns each chore a roommate and uses the time library to manage how much time has passed since the roommate has been assigned the chore. If the roommate waits to check off the chore longer than the frequency of the chore indicated, they will be marked late.

This project is primarily written in **C++**, and is intended to demonstrate programming skills including
- component class relationships
- file input and output
- user input validation

## How it Works
The program first prompts the user for a household name, then it gives the user the opportunity to input their next choice. First, they must type 'n' to add the first roommate to the household, and after this it is their choice.

You will have 5 options to interact with this program:
1. **(c)** Will take you through adding a chore to your list. You can assign a point value to the chore depending on how intensive the chore is. For example, the dishes may be 1 point, while deep cleaning the fridge may be 3 points. You can also tell the program how often this chore should be done, in days. The dishes may need to be done every 1 day(s) while deep cleaning the fridge may need to be done every 7 day(s), for example.
2. **(d)** Will allow you to check off a chore once it is completed. You can indicate who did the chore, and what chore they did.This will give that roommate the points associated with the chore.
3. **(n)** Will allow you to add a roommate to your household. Each roommate will be randomly assigned chores, and added to the points leaderboard.
4. **(i)** Is the information section, which will output a description of what each button does, similar to what you are reading now.
5. **(e)** Will allow you to end the program and close the chore tracker. Be careful, as exiting the program means your points and chore list will be lost!

## Known Bugs
|Error Type| Description                                                                                      | Impact |
|----------|--------------------------------------------------------------------------------------------------|--------|
| Runtime| When the user is given a prompt, it automatically defaults to having a no input validation error | Does not effect the functionality of the program | 
