#ifndef #COURSE_H
#define #COURSE_H

#include <iostream>
using namespace std;

class Course // create a course class
{
  private: // private
    int courseID;
    string courseName;
    int grade;
  public: // public
    Course() // constructor
    {
      courseID = 0;
      courseName = " ";
      grade = 0;
    }

    Course(int id, string cname, int grade)
    {
      courseID = id;
      courseName = cname;
      grade = grade;
    } // paramaterize constructor

    //getters and setters

    int getCourseID()
    {
      return courseID;
    }

    void setCourseID(int courseID)
    {
      this-> courseID = courseID;
    }

    int getCourseName()
    {
      return courseName;
    }

    void setCourseName(string courseName)
    {
      this->courseName = courseName;
    }

    int getGrade()
    {
      return grade;
    }

    void setGrade(int grade)
    {
      this-> grade = grade;
    }

    bool operator<(Course &c) const
    {
      return this->courseID < c.courseID;
    }
};