#include "Course.h"

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
string Course::getCname()
{
  return cname;
}
int Course::getCredits()
{
  return credits;
}
string Course::getSemester()
{
  return semester;
}
vector<Student> Course::getStudent()
{
  return student;
}
int Course::getNumCourses()
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
