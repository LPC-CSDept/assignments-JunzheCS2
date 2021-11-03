#include "student.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Student::student()
{
  sname = " ";
  sid = 0;
  dob;
}

Student::student(string sn, int id,DOB date)
{
  sname = sn;
  sid = id;
  dob = date;
}

int Student::getSid() const{
  return sid;
}

string Student::getSname() const{
  return sname;
}

DOB Student::getDOB() const
{
  return dob;
}

void Student::setSname(string sn)
{
  sname = sn;
}

void Student::setSid(int id)
{
  sid = id;
}

void Student::setDOB(int date)
{
  dob = date;
}

DOB::DOB()
{
  month = 0;
  day = 0;
}

DOB::DOB(int m, int d)
{
  month = m;
  day = d;
}

int DOB:getMonth() const
{
  return month;
}

int DOB::getDay() const
{
  return day;
}

void DOB::printDate() const
{
  cout << " date of birth is : " << month << " " << day << endl;
}

void DOB::setDOB(int m, int d)
{
  month = m;
  day = d;
}

void DOB::setMonth(int m)
{
  month = m;
}

void DOB::setDay(int d)
{
  day = d;
}