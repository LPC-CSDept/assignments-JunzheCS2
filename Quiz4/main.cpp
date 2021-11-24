#include "Course.h"
#include "Student.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
  int N = 4;
  Course course[N];
  ifstream file;

  file.open("coursestudents.txt");
  if(file.fail())
  {
    cout << "File can not be opened " << endl;;
    exit(0);
  }

  for(int i = 0; i<N; i++)
  {
    file >> course[i];
    cout << course[i] << endl;
  }

  file.close();

  file.open("addstudents.txt");
  if(file.fail())
  {
    cout << "file can not be opened " << endl;
    exit(0);
  }

  string CID;
  while(file >> CID)
  {
    cout << " the course ID : " << CID << endl;
    int idx;
    for(int i=0;i<Course::getNumCourses();i++)
    {
      if(course[i].getCname() == CID)
      {
        CID = i;
      }
    }
  }

  

  
}