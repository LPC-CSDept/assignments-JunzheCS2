#include <iostream>
#include "Student.h"
#include "Course.h"
#include <fstream>
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
    cout << "File can not be opened" << endl;
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
    cout << "File can not be opened" << endl;
    exit(0);
  }

  string CID;
  while (file >> CID)
  {
    int index;
    for(int i = 0; i < Course::getNumCourses(); i++)
    {
      if(course[i].getCname() == CID)
      {
        index = i;
      }
    }
  int studentN;
  file >> studentN;

    for(int i = 0; i < studentN; i++)
    {
      int ID;
      string sname;
      char grade;
      double scores;
      file >> ID >> sname >> grade >> scores;
      Student s(ID, sname, grade, scores);
      course[CID].addStudent(s);
    }

    cout << "Student list: " << endl;
    cout << course[CID] << endl;
  }
  file.close();

  for(int i = 0; i<Course::getNumCourses(); i++)
  {
    cout << course[i] << endl;
  }
}

ifstream &operator>>(ifstream &ifs, Course &c)
{
  string cname;
  int credits;
  string semester;
  ifs >> cname >> credits >> semester;

  int studentN;
  ifs >> studentN;

  vector<Student> students;
  for(int i = 0; i<studentN; i++)
  {
    int ID;
    string sname;
    char grade;
    double scores;
    ifs >> ID >> sname >> grade >> scores;
    Student s = Student(ID, sname, grade, scores);
    students.push_back(s);
  }
  c.setCourse(cname, credits, semester, students);
}

ostream &operator<<(ostream &os, Course &c)
{
  os << c.getCname() << "\t" << c.getCredits() << "\t" ;
  os << "StudentID\tcredit\tGrade\tScore\t" << endl;

  for(int i = 0; i<c.getStudent().size(); i++)
  {
    os << c.getStudent()[i].getID() << endl << c.getStudent()[i].getSname() << endl << c.getStudent()[i].getGrade() << endl << c.getStudent()[i].getScores() << endl ;
  }
  os << endl;
}