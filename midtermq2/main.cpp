#include <iostream>
#include <fstream>
using namespace std;

class Student
{
  private:
    int id;
    string name;
    int score1;
    int score2;
    int score3;
  public:
    Student()
    {
      id = 0;
      name = " NONE ";
    }
    Student(int id, const string &name, int score1, int score2, int score3)
    {
      this->id = id;
      this->name = name;
      this->score1 = score1;
      this->score2 = score2;
      this->score3 = score3;
    }

};
#endif