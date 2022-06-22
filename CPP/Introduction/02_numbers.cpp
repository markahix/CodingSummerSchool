#include <iostream>
#include <cstdlib>

int main()
{
  int my_integer;
  double my_double;

  my_integer= 10;
  my_double = 10.3;
  // Note how there is no decimal at the end of my_integer.

  std::cout << "my_integer is :" << my_integer << std::endl;
  std::cout << "my_double  is :" << my_double << std::endl;
  
  std::cout << "\n\nLet's do some integer division!\n\n";
  std::cout << "10 / 3 = " << 10/3 << std::endl;
  std::cout << "28 / 5 = " << 28/5 << std::endl;
  
  std::cout << "\n\nNow let's do some double division!" << std::endl;
  std::cout << "10. / 3. = " << 10./3. << std::endl;
  std::cout << "28. / 5. = " << 28./5. << std::endl;
  // Note that even though 10 and 3 are integers, we've included the decimal.  This forces C++ to treat them as doubles instead of integers.
  
  std::cout << "\n\nNow let's do some mixed division!" << std::endl;
  std::cout << "10. / 3 = " << 10./3 << std::endl;
  std::cout << "28 / 5. = " << 28/5. << std::endl;
  // When we run this program, notice the outputs.  Both should be doubles because C++ gives importance to doubles over ints 
  return 0;
}
