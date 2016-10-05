//
//  problemTwo.cpp
//  COMP 241
//  Fall 2015
//  PA1 Problem 2
//  17 September, 2015
//  Nate McCain
//
#include "unsortedTwo.h"


// Constructor
UnsortedList::UnsortedList()
{
  length = 0;
  currentPos = -1;
}

bool UnsortedList::IsFull() const
{
  return( length == MAX_ITEMS );
}

int UnsortedList::GetLength() const
{
  return length;
}

int UnsortedList::GetItem(int item)
{
  bool moreToSearch;
  int location = 0;

  moreToSearch = ( location < length );

  while( moreToSearch )
  {
    if( item == info[location] )
    {
      return item;
    }
    location++;
    moreToSearch = (location < length);
  }
    return -1;
 }

// Changed the if statement from
// if (length > MAX_ITEMS) to if (length >= MAX_ITEMS).
bool UnsortedList::PutItem(int item)
{
  if (length >= MAX_ITEMS)
  {
    return false;
  }
    else
    {
  info[length] = item;
  length++;
  return true;
    }
}

void UnsortedList::DeleteItem(int item)
{
  int location = 0;
  while(item != info[location] )
  {
    location ++;
  }

  info[location] = info[length-1];
  length--;
}

void UnsortedList::MakeEmpty()
{
  length = 0;
}

int UnsortedList::GetNextItem()
{
  currentPos++;
  return info[currentPos];
}

// Iterates through the unsorted list and prints
// out each value held within it.
void UnsortedList::PrintList()
{
    int length = UnsortedList::GetLength();
    
    std::cout << "The list is comprised of: " << std::endl;
    
    for (int pos = 0; pos < length; pos++)
    {
        std::cout << info[pos] << ' ';
    }
    std::cout << std::endl;
    
}
