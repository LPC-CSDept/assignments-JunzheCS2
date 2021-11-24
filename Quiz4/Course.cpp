#include "Course.h"
#include "Student.h"
#include <string>
#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

int Course::NUM_COURSES=0;

Course::Course()
{
  NUM_COURSES+=1;
}
Course::Course(string cname, int credits, string semester, vector<Student> student)
{
  this->cname=cname;
  this->credits=credits;
  this->semester=semester;
  this->student=student;
  NUM_COURSES+=1;
}
string Course::getCname(void)
{
  return cname;
}
int Course::getCredits(void)
{
  return credits;
}
string Course::getSemester(void)
{
  return semester;
}
vector<Student> Course::getStudent(void)
{
  return student;
}
int Course::getNumCourses(void)
{
  return NUM_COURSES;
}

void Course::setCname(string cname)
{
  this->cname = cname;
}
void Course::setCredits(int credits)
{
  this->credits = credits;
}
void Course::setSemester(string semester)
{
  this->semester = semester;
}
void Course::setStudent(vector<Student> student)
{
  this->student = student;
}
void Course::setCourse(string cname, int credits, string semester, vector<Student> student)
{
  this->cname = cname;
  this->credits = credits;
  this->semester = semester;
  this->student = student;
}
void Course::addStudent(Student &s)
{
  this->student.push_back(s);
}
