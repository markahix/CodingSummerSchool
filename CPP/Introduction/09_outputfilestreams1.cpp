#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
  ofstream outFile;
  string words;
  
  outFile.open("TestData/output_file.txt",ios::out);
  outFile << "This is just a bunch of text." << endl;
  outFile << "This is a second line after the first 'endl'." << endl;
  outFile.close();
  return 0;
}
