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

  return 0;
}