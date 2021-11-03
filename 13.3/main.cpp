#include <iostream>
#include "student.hpp"
#include <fstream>
using namespace std;

int main() {
  ifstream file;
  string sna;
  int idn;
  int mon;
  int da;
  DOB dat;
  Student s[10];
  const int N = 10;

  file.open("students.txt");
  if(file.fail())
  {
    cout << " file cannot be opened. " << endl;
  }

  
} 