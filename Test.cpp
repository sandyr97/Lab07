#include"Test.h"

Test::Test()
{

}

void Test::runTests()
{
  if (testList.isEmpty())
  {
    std::cout << "Test 1: IsEmpty Passed" << '\n';
    if (testList.size()==0)
    {
      std::cout << "Test 2: Size Passed" << '\n';
    }
    else
    {
      std::cout << "Test 2: size failed. BUG FOUND!" << '\n';
    }
  }
  else
  {
  std::cout << "Test 1: IsEmpty Failed. BUG FOUND!" << '\n';
  }

  std::cout << "adding to front!" << '\n';
  testList.addFront(4);
  std::vector<int> myvector=testList.toVector();
  int expected=*(myvector.begin());
  if (expected==4)
  {
    std::cout << "Test 3: addFront() Passed" << '\n';
    if (!testList.isEmpty())
    {
      std::cout << "Test 4: Is (NOT) Empty Passed" << '\n';
    }
    else
    {
    std::cout << "Test 4: Is (NOT) Empty Failed. BUG FOUND!" << '\n';
    }
    if (testList.size()==1)
    {
      std::cout << "Test 2: Size Passed" << '\n';
    }
    else
    {
      std::cout << "Test 2: size failed. BUG FOUND!" << '\n';
    }
  }
  else
  {
    std::cout << "Test 3: addFront() Failed. BUG FOUND!" << '\n';
  }
  std::cout << "my Linked list contains: ";
  for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
  {
    std::cout << ' ' << *it;
    std::cout << '\n';
  }


  std::cout << "adding to back!" << '\n';
  testList.addBack(7);
  myvector=testList.toVector();
  expected=myvector.back();


  if (expected==7)
  {
    std::cout << "Test 5: addBack() Passed" << '\n';

  }
  else
  {
    std::cout << "Test 5: addBack() Failed. BUG FOUND!" << '\n';
  }
  std::cout << "my Linked list contains: ";
  for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
  {
    std::cout << ' ' << *it;
    std::cout << '\n';
  }
  testList.addFront(15);
  testList.addFront(16);
  testList.addFront(17);

  int current_size=testList.size();
  std::cout << "Removing back!" << '\n';
  bool isremvoed= testList.removeBack();
  testList.removeBack();
  myvector=testList.toVector();
  expected=myvector.back();

  if (isremvoed)
  {
    std::cout << "Test 6: removeBack() returns true and back int removed Passed" << '\n';
  }
  else
  {
    std::cout << "Test 6: removeBack() returns false when list is not empty. BUG FOUND!" << '\n';
  }

  if (myvector.size()==(current_size-1) && expected==7) //checks for correct back value and size of list
  {
    std::cout << "Test 7: removeBack() Passed" << '\n';
  }
  else
  {
    std::cout << "Test 7: removeBack() Failed. BUG FOUND!" << '\n';
  }

  std::cout << "my Linked list contains:";
  for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
  {
    std::cout << ' ' << *it;
    std::cout << '\n';
  }

  testList.addFront(10);
  testList.addFront(11);
  testList.addFront(12);

  std::cout << "Removing front!" << '\n';
  current_size=testList.size();
  isremvoed=testList.removeFront();
  testList.removeFront();
  testList.toVector();
  myvector=testList.toVector();
  expected=*(myvector.begin());

  if (isremvoed)
  {
    std::cout << "Test 8: removeFront() returns true and front int removed Passed" << '\n';
  }
  else
  {
    std::cout << "Test 8: removeFront() returns false when list is not empty. BUG FOUND!" << '\n';
  }

  if (expected==11 && myvector.size()==(current_size-1))//checks for correct front value and size of list
  {
    std::cout << "Test 9: removeFront() Passed" << '\n';
  }
  else
  {
    std::cout << "Test 9: removeFront() Failed. BUG FOUND!" << '\n';
  }



  std::cout << "my Linked list contains:";
  for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
  {
    std::cout << ' ' << *it;
    std::cout << '\n';
  }

  std::cout << "Starting search" << '\n';
  bool found= testList.search(4);
  if (found)
    {
      std::cout << "Test 10: search(4) Passed" << '\n';
    }
  else
  {
    std::cout << "Test 10: search(4) failed. BUG FOUND!" << '\n';
  }

  std::cout << "Starting search that should fail" << '\n';
  found= testList.search(67);
  if (!found)
    {
      std::cout << "Test 11: int 67 not found so search() Passed" << '\n';
    }
  else
  {
    std::cout << "Test 11: int 67 found so search() failed. BUG FOUND!" << '\n';
  }






}

Test::~Test()
{

}
