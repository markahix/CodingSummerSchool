#include <iostream>
#include <cstdlib>

int main()
{
  std::cout << "Hello World!\n";
  int my_integer;
  double my_double;

  my_integer= 10;
  my_double = 10.3;

  std::cout << "my_integer is :" << my_integer << std::endl;
  std::cout << "my_double  is :" << my_double << std::endl;
  
  std::cout << "\n\nLet's do some integer division!\n\n";
  std::cout << "10 / 3 = " << 10/3 << std::endl;
  std::cout << "28 / 5 = " << 28/5 << std::endl;
  
  std::cout << "\n\nNow let's do some double division!" << std::endl;
  std::cout << "10. / 3. = " << 10./3. << std::endl;
  std::cout << "28. / 5. = " << 28./5. << std::endl;

  return 0;
}
