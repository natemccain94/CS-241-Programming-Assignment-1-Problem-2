//
//  problemTwoDriver.cpp
//  COMP 241
//  Fall 2015
//  PA1 Problem 2
//  17 September, 2015
//  Nate McCain
//

#include <iostream>
#include "unsortedTwo.h"

using namespace std;

// Holds the value the user would like to remove.
int userInput;
// Holds the position in the array of the item the user
// would like to delete.
int deleteItemLoc;

int main()
{
    // Initializes the unsorted list.
    UnsortedList myList;
    // Putting integers into the list.
    myList.PutItem(1);
    myList.PutItem(2);
    myList.PutItem(3);
    
    // This one will not be entered into the list because MAX_ITEMS = 3.
    myList.PutItem(4);
    
    // Prints out the length of the list.
    cout << "The size of the list is: " << myList.GetLength() << endl;
    
    // Calls the function that prints the entire list.
    myList.PrintList();
    
    // Check GetItem before performing the delete function.
    // If number chosen is not in the list, gives an error
    // message and asks the user to enter a different integer.
    do
    {
        cout << "Please type a number that you would like to delete from the list." << endl;
        cin >> userInput;
        
        // Checks to see if the number is in the list.
        deleteItemLoc = myList.GetItem(userInput);
        
        // Error message if number is not in the list.
        if (deleteItemLoc == -1)
        {
            cout << "Error. The number you have chosen is not in the list." << endl;
        }
        
        
    } while (deleteItemLoc == -1);
    
    // Deletes the user's first input from the list.
    myList.DeleteItem(deleteItemLoc);
    
    // Check GetItem before performing the delete function.
    // If number chosen is not in the list, gives an error
    // message and asks the user to enter a different integer.
    do
    {
        cout << "Please type a number that you would like to delete from the list." << endl;
        cin >> userInput;
        
        // Checks to see if the number is in the list.
        deleteItemLoc = myList.GetItem(userInput);
        
        // Error message if number is not in the list.
        if (deleteItemLoc == -1)
        {
            cout << "Error. The number you have chosen is not in the list." << endl;
        }
        
    } while (deleteItemLoc == -1);
    
    // Deletes the user's second input from the list.
    myList.DeleteItem(deleteItemLoc);
    
    // Prints the list after the user has removed two integers from the list.
    myList.PrintList();
    
    return 0;
}












