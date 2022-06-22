#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
  ifstream inFile;
  string words;
  
  inFile.open("TestData/input_file.txt",ios::in);

  while ( getline(inFile,words) )
  {
    // Let's try some if-statements to see if a word is in the line...
    if (words.find("General") != string::npos)
    {
      transform(words.begin(), words.end(), words.begin(), ::toupper);
      cout << words << endl;
    }
    else
    {
      cout << words << endl;
    }
  }
  inFile.close();
  return 0;
}