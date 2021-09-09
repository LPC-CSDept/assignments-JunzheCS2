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

int main()
{
  ifstream ifs;
  Student s;

  ifs.open("student.bin");

  ifs.read((char *)&s, sizeof(s));

  cout << " ID " << s.id << "\t";
  cout << " Name " << s.name << "\t";
  cout << " Score1 " << s.score[0] << "\t";
  cout << " Score2 " << s.score[1] << "\t";
  cout << " Sum " << s.sum << "\t";
  cout << "Avg " << s.average << "\n";

}