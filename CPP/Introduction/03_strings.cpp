#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
// This line is being added to make it easier to use the functions contained within it.
// It's similar to python's "from library import *", in that it removes the requirement to include
// "std::" at the start of many of the library-dependent variable types and functions.

int main()
{
  char* my_charstring = "Texas has the best barbecue!";
  string my_string;
  my_string = "Detroit has the best Cheesy Fries!";

  cout << "Now to see how that string is doing.  It was called 'my_string'...\n";
  cout << my_string << endl;

  cout << "And the char* list...  It was called 'my_charstring'...\n";
  cout << my_charstring << endl;

  return 0;
}
