#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student
{
  private:
    int ID;
    string sname;
    char grade;
    double scores;

  public:
    Student();
    Student(int, string, char, double);
    int getID();
    string getSname();
    char getGrade();
    int getScores();

    void setID(int);
    void setSname(string);
    void setGrade(char);
    void setScores(double);
  
};