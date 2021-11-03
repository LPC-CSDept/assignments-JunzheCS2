#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>

using namespace std;

class Student
{
  private:
    int sid;
    string sname;
    DOB dob;

  public:
    student();
    student(string sn, int id, DOB date);
    int getSid() const;
    string getSname() const;
    DOB getDOB() const;
    void setSname(string sn);
    void setSid(int id);
    void setDOB(DOB date);
};

class DOB
{
  private:
    int month;
    int day;
  public:
    DOB();
    DOB(int m, int d);
    int getMonth() const;
    int getDay() const;
    void printDate() const;
    void setDOB(int m, int d);
    void setMoneth(int m);
    void setDay(int d);
  
};

#endif