#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;

class Course // create a course by class
{
  private:
    int courseID;
    string courseName;
    int grade;
  public:
    Course()
    {
      courseID = 0;
      courseName = " ";
      grade = 0; // constructor
    }

    Course(int id, string name, int Grade)
    {
      courseID = id;
      courseName = name;
      grade = Grade; // paramaterized constructor
    }

    int getCourseID() const
    {
      return courseID;
    }
}