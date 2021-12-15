#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

#include "Student.hpp"
using namespace std;

class Course {
 private:
  string cname;
  int credits;
  string semester;
  vector<Student> student;

 public:
  // static public variable
  static int NUM_COURSES;
  static int getNumberOfCourses() { return NUM_COURSES; }

  // default constructor
  Course() 
  {
    this->setCname(" ");
    this->setCredits(0);
    this->setSemester(" ");
    this->setStudent({});
    NUM_COURSES++;
  }

  // paramaterized constructor
  Course(string courseName, int courseCredits, string sem, vector<Student> studentsEnrolled) 
  {
    this->setCname(courseName);
    this->setCredits(courseCredits);
    this->setSemester(sem);
    this->setStudent(studentsEnrolled);
    NUM_COURSES++;
  }

 
  string getCname() const 
  { 
    return this->cname;
  }

  void setCname(string cname) 
  { 
    this->cname = cname;
  }

  int getCredits() const 
  { 
    return this->credits;
  }

  void setCredits(int credits) 
  { 
    this->credits = credits;
  }

  string getSemester() const 
  { 
    return this->semester;
  }

  void setSemester(string semester) 
  { 
    this->semester = semester;
  }

  vector<Student> getStudent() const 
  { 
    return this->student;
  }

  void setStudent(vector<Student> student) 
  { 
    this->student = student;
  }

  // add a new student
  void addStudent(Student &s) 
  { 
    this->student.push_back(s);
  }

  // update the course with new values.
  void setCourse(string courseName, int courseCredits, string sem,vector<Student> studentsEnrolled) 
  {
    this->setCname(courseName);
    this->setCredits(courseCredits);
    this->setSemester(sem);
    this->setStudent(studentsEnrolled);
  }

  // overloading 
  friend istream &operator>>(istream &ifs, Course &c) 
  {
    vector<Student> students;
    string cname;
    int credits;
    string semester;

    int ID;
    string sname;
    char grade;
    double scores;

    int studentsCnt;
    ifs >> cname >> credits >> semester;
    ifs >> studentsCnt;
    while (studentsCnt > 0) {
      ifs >> ID >> sname >> grade >> scores;
      Student s;
      s.setStudent(ID, sname, grade, scores);
      students.push_back(s);
      studentsCnt--;
    }
    c.setCourse(cname, credits, semester, students);
    return ifs;
  }

  // Overloading 
  friend ostream &operator<<(ostream &ofs, Course &c) 
  {
    ofs << "\n" << c.getCname() << "\t" << c.getCredits() << "\t" << c.getSemester();
    ofs << "\nStudent ID  Credit  Grade  Score\n";

    for (Student x : c.getStudent()) 
    {
      cout << setw(12) << left << x.getID() << setw(8) << left << x.getSname() << setw(7) << left << x.getGrade() << setw(5) << left << x.getScores() << "\n";
    }
    return ofs;
  }
};