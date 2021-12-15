#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <algorithm>
#include <fstream>
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

    // getters and setters
    int getCourseID() const
    {
      return courseID;
    }

    string getCourseName() const
    {
      return courseName;
    }

    int getGrade()const
    {
      return grade;
    }

    void setCourseID(int courseID)
    {
      this ->courseID = courseID;
    }

    void setCourseName(string courseName)
    {
      this->courseName = courseName;
    }

    void setGrade(int grade)
    {
      this->grade = grade;
    }
    
    bool operator<(Course &c) const
    {
      return this->courseID < c.courseID;
    }
};
#endif

