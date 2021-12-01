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

    void setId(int id)
    {
      Student::id = id;
    }

    void setName(const string &name)
    {
      Student::name = name;
    }

    void setScore1(int score1)
    {
      Student::score1 = score1;
    }

    void setScore2(int score2)
    {
      Student::score2 = score2;
    }

    void setScore3(int score3)
    {
      Student::score3 = score3;
    }

    int getId() const
    {
      return id;
    }

    const string &getName() const
    {
      return name;
    }

    int getScore1() const
    {
      return score1;
    }

    int getScore2() const
    {
      return score2;
    }

    int getScore3() const
    {
      return score3;
    }


    

};
#endif