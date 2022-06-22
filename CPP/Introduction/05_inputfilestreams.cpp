#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
  ifstream inFile;
  string words;
  
  //Whenever you open a file...
  inFile.open("TestData/input_file.txt",ios::in);
  inFile >> words;
  //You have to close it!
  inFile.close();
  cout << words;
  
  cout <<"\n\n Note that we only got one word of the file.\n\n";

  return 0;
}