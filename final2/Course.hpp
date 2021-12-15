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

void printCourses(Course *c, int size) // print the course
{
  for(int i=0;i<size;i++)
  {
    cout << c[i].getCourseID() << " " << c[i].getCourseName() << " " << c[i].getGrade() << " \n ";
    cout << endl;
  }
}
void swapCourses(Course *c1, Course *c2); // swap 2 course
{
  Course temp = *c1;
  *c1 = *c2;
  *c2 = temp;
}
int partition(Course *c, int s, int e);
{
  int pivot = course[e].getCourseID(); // pivot value is the last
  int i = (s - 1);
  for(int j=s;j<e;j++)
  {
    if(c[j].getCourseID()<=pivot)
    {
      i++;
      swapCourses(&c[i], &c[j]);
    }
  }
  swapCourses(&c[i+1], &c[e]);
  return i+1;
}
void quickSort(Course *c, int s, int e);