#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Student;

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
    Course(string, int, string ,vector<Student>);

    string getCname(void);
    int getCredits(void);
    string getSemester(void);
    vector<Student> getStudent(void);
    static int getNumCourses();

    void setCname(string);
    void setCredits(int);
    void setSemester(string);
    void setStudent(vector<Student>);
    void setCourse(string cname, int credits, string semester, vector<Student> student);
    void addStudent(Student &s);

    friend ifstream &operator>>(ifstream &, Course &);
    friend ostream &operator>>(ostream &, Course &);

};

#endif