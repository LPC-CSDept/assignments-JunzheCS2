#include <iostream>
using namespace std;

class Student {
 private:
  int ID;
  string sname;
  char grade;
  double scores;

 public:
  // constructor
  Student() 
  {
    this->setGrade(' ');
    this->setID(0);
    this->setScores(0.0);
    this->setSname(" ");
  }

  // paramaterized constructor.
  Student(int id, string name, char grade, double scores) 
  {
    this->setID(id);
    this->setSname(name);
    this->setGrade(grade);
    this->setScores(scores);
  }

  void setStudent(int id, string name, char grade, double scores) 
  {
    this->setID(id);
    this->setSname(name);
    this->setGrade(grade);
    this->setScores(scores);
  }

//Getters and setters
  int getID() const 
  { 
    return this->ID;
  }

  void setID(int ID) 
  { 
    this->ID = ID;
  }

  string getSname() const 
  { 
    return this->sname;
  }

  void setSname(string sname)
  { 
    this->sname = sname;
  }

  char getGrade() const 
  { 
    return this->grade;
  }

  void setGrade(char grade) 
  { 
    this->grade = grade;
  }

  double getScores() const 
  { 
    return this->scores;
  }

  void setScores(double scores)
  { 
    this->scores = scores;
  }
  
};