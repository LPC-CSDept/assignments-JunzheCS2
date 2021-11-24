#include "Student.h"

Student::Student()
{

}

Student::Student(int ID, string sname, char grade, double scores)
{
  this->ID = ID;
  this->sname = sname;
  this->grade = grade;
  this->scores = scores;
}
int Student::getID()
{
  return ID;
}
string Student::getSname()
{
  return sname;
}
char Student::getGrade()
{
  return grade;
}
double Student::getScores()
{
  return scores;
}

void Student::setID(int ID)
{
  this->ID = ID;
}
void Student::setSname(string sname)
{
  this->sname = sname;
}
void Student::setGrade(char grade)
{
  this->grade = grade;
}
void Student::setScores(double scores)
{
  this->scores = scores;
}
