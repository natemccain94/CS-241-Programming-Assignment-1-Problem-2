//
//  unsortedTwo.h
//  COMP 241
//  Fall 2015
//  PA1 Problem 2
//  17 September, 2015
//  Nate McCain
//
/*****
 * Unsorted Type
 */
// I added a void Printlist() function. 

#ifndef UNSORTED_TYPE
#define UNSORTED_TYPE

static const int MAX_ITEMS = 3;

class UnsortedList {

 public:
  UnsortedList();
  void MakeEmpty();
  bool IsFull() const;
  int GetLength() const;
  int GetItem( int item );
  bool PutItem(int item);
  void DeleteItem(int item);
  int GetNextItem();
    void PrintList();

private:
  int length;
  int info[MAX_ITEMS];
  int currentPos;
};

#endif
