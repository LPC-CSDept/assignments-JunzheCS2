#include "student.hpp"
#include <fstream>

void printStudent(Student s[], int N);

int main()
{
  ifstream file;
  const int N = 10;
  Student s[N];
  string name;
  int ID;
  int month;
  int day;
  DOB date;

  file.open("students.txt");
  if(file.fail())
  {
    cerr << " error. " << endl;
    exit(0);
  }

  int i=0;
  while(file>>name>>ID>>month>>day) // followed your instructions that changes to while loop instead of for loop, create an integer i and i++ in the while loop to set the value.
  {
    
    date.setDOB(month,day);
    s[i].setSname(name);
    s[i].setID(ID);
    s[i].setDOB(date);
    i++;
  }
  
  printStudent(s,N);

}

void printStudent(Student s[], int N)
{
  for (int i = 0; i < N; i++)
  {
  DOB date;
  cout<< "Student Name: "<<s[i].getSname() <<endl;
  cout<< "Student ID: "<<s[i].getID() <<endl;
  date = s[i].getDOB();
  date.printDate();
  }
}