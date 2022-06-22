#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  double var1, var2, sum, difference, product, dividend;

  cout << "Let's do some math!\nEnter a number: ";
  cin >> var1;
  cout << "Enter another number: ";
  cin >> var2;

  // Assigning results of mathematical functions to new variables.
  sum = var1+var2;
  difference = var1-var2;
  product = var1*var2;
  dividend = var1/var2;

  cout << "Addition: " << var1 << " + " << var2 << " = " << sum << endl;
  cout << "Subtraction: " << var1 << " - " << var2 << " = " << difference << endl;
  cout << "Multiplication: " << var1 << " * " << var2 << " = " << product << endl;
  cout << "Division: " << var1 << " / " << var2 << " = " << dividend << endl;

  return 0;
}