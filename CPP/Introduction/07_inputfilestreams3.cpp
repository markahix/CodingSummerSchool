#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
  ifstream inFile;
  string words;
  
  inFile.open("TestData/input_file.txt",ios::in);
  // this is also the first example of a "while-loop".
  while ( getline(inFile,words) )
  {
    cout << words << endl;
  }
  inFile.close();
  return 0;
}