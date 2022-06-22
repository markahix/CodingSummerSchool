#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
  ifstream inFile;
  string words;
  
  cout <<"Let's try getline(): \n";
  inFile.open("TestData/input_file.txt",ios::in);
  getline(inFile,words);
  inFile.close();

  cout <<  words << endl;
  cout << "\n\nNow we're able to get an entire line.  How can we use this?\n\n\n";

  inFile.open("TestData/input_file.txt",ios::in);
  // this is also the first example of a "while-loop".
  while ( getline(inFile,words) )
  {
    cout << words << endl;
  }
  inFile.close();
  return 0;
}