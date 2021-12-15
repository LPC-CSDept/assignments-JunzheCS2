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

    // getters and setters
    int getCourseID() const
    {
      return courseID;
    }

    String getCourseName()
    {
      return courseName;
    }

    int getGrade()
    {
      return grade;
    }

    void setCourseID(int cID)
    {
      this ->cID = cID;
    }

    void setCourseName(string cname)
    {
      this->cname = cname;
    }

    void setGrade(int grade)
    {
      this->grade = grade;
    }
    
    bool operator<(Course &c)
    {
      return this->c < c.courseID;
    }
};

