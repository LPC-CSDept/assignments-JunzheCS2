#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Course
{
  private:
    string cname;
    int credits;
    string semester;
    vector<Student> student;
    static int NUM_COURSES;
  public:
    Course();
    Course(string, int, string, vector<Student>);

    string getCname();
    int getCredits();
    string getSemester();
    vector<Student> getStudent();
    static int getNumCourses();

    void setCourse(string, int, string, vector<Student>);
    void addStudent(Student &s);

    friend ifstream &operator>>(ifstream &, Course &);
    friend ostream &operator>>(ostream &, Course &);

};