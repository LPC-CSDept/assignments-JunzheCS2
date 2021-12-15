#include <fstream>
#include <iostream>
#include "Course.hpp"
using namespace std;

int Course::NUM_COURSES;
int main(int a, char const *ar[]) {
  // create an object 
  ifstream ifs;
  // oepn file
  ifs.open("coursestudents.txt");
  Course::NUM_COURSES = 0;
  Course courses[4];
  // initialize the courses.
  for (int i = 0; i < Course::getNumberOfCourses(); i++) {
    ifs >> courses[i];
  }
  // close the file.
  ifs.close();

  ifs.open("addstudents.txt");
  string cid;
  int numStudents;
  int ID;
  string sname;
  char grade;
  double scores;
  int i;

  // while loop
  while (!ifs.eof()) {
    ifs >> cid;
    ifs >> numStudents;
    for (i = 0; i < Course::getNumberOfCourses(); i++) {
      if (courses[i].getCname() == cid) {
        break;
      }
    }
    if (i < 4 && !ifs.eof()) {
      while (numStudents > 0) {
        Student sObj;
        ifs >> ID >> sname >> grade >> scores;
        sObj.setStudent(ID, sname, grade, scores);
        courses[i].addStudent(sObj);
        numStudents--;
      }
      cout << "Updated Students list for the Course " << cid << endl;
    }
  }

  // Display the udpated course list.
  cout << "\nUpdated list";
  cout << "\n------------";
  for (i = 0; i < Course::getNumberOfCourses(); i++) {
    cout << courses[i];
  }

  return 0;
}

// I did it all over again, I combined cpp and hpp into hpp. Thought that would be easy to set up, student hpp is easier to do but in course hpp, I was stuck at the friend overaloading system, because I tried to read the read the data values in hpp then in main function was easy to set up too, read the file then with a while loop. 