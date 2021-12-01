#include <iostream>
#include <fstream>
#include <vector>
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

void searchId(int id, vector<Student *> vector1)
{
  for(int i=0;i<vector1.size();i++)
  {
    if(vector1[i]->getId()==id)
    {
      cout << " student Found " <<endl;
      cout << vector1[i]->getId()<<endl;
      cout << vector1[i]->getName()<<endl;
      cout << vector1[i]->getScore1()<<endl;
      cout << vector1[i]->getScore2()<<endl;
      cout << vector1[i]->getScore3()<<endl;
      return;
    }
  }
  cout << "Not Found"<<endl;
}

bool compare(Student* s1, Student* s2)
{
  return s1->getScore1() + s1->getScore2() + s1->getScore3() > s2->getScore1() + s2->getScore2() + s2->getScore3();
}

#endif