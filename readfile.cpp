#include <iostream>
#include <fstream>
using namespace std;
struct Student
{
  int id;
  char name[20];
  double score[2];
  double sum;
  double average;
};

int main() {
  ifstream stu; // declare a file
  ofstream ofs;
  Student s; // declare student
  stu.open("student.txt"); // open the file
  ofs.open("student.bin");

  for(int i = 0; i < 10; i++) //save all data
  {
    // Line 23-28: indentation required
  stu >> s.id; //save
  stu >> s.name; // save name
  stu >> s.score[0];
  stu >> s.score[1];
  s.sum = s.score[0] + s.score[1];
  s.average = s.sum/2;
  }

  for(int i = 0; i < 10; i++) // print all
  {
    cout << s.id << "\t";
    cout << s.name << "\t";
    cout << s.score[0] << " " << s.score[1] << "\t";
    cout << s.sum << " " << s.average << endl;
  }

  for(int i = 0 ; i < 10 ; i++)
  {
    ofs.write((char *)&s, sizeof(s));
    // s was declared single struct varialbe at line 16.
    // This for loop trying to write the same value s 10 times repeatedly
    
  }

}
