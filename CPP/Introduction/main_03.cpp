#include <iostream>
#include <cstdlib>
#include <cstring>

int main()
{
  std::cout << "Hello World!\n";
  int my_integer;
  double my_double;
  std::string my_string;

  my_integer= 10;
  my_double = 10.3;
  my_string = "Detroit has the best Cheesy Fries!";

  std::cout << "my_integer is :" << my_integer << std::endl;
  std::cout << "my_double  is :" << my_double << std::endl;
  
  std::cout << "\n\nLet's do some integer division!\n\n";
  std::cout << "10 / 3 = " << 10/3 << std::endl;
  std::cout << "28 / 5 = " << 28/5 << std::endl;
  
  std::cout << "\n\nNow let's do some double division!" << std::endl;
  std::cout << "10. / 3. = " << 10./3. << std::endl;
  std::cout << "28. / 5. = " << 28./5. << std::endl;

  std::cout << "Now to see how that string is doing.  It was called 'my_string'...\n";
  std::cout << my_string <<std::endl;

  return 0;
}
