#include <iostream>
#include <algorithm>

using namespace std;

class Course // create a course class
{
  private: // private
    int courseID;
    string courseName;
    int grade;
  public: // public
    Course() // constructor
    {
      courseID = 0;
      courseName = " ";
      grade = 0;
    }

    Course(int id, string cname, int grade)
    {
      courseID = id;
      courseName = cname;
      grade = grade;
    } // paramaterize constructor

    //getters and setters

    int getCourseID()
    {
      return courseID;
    }

    void setCourseID(int courseID)
    {
      this-> courseID = courseID;
    }

    string getCourseName()
    {
      return courseName;
    }

    void setCourseName(string courseName)
    {
      this->courseName = courseName;
    }

    int getGrade()
    {
      return grade;
    }

    void setGrade(int grade)
    {
      this-> grade = grade;
    }

    bool operator<(Course &c) const
    {
      return this->courseID < c.courseID;
    }
};

void printCourses(Course *c, int size) // print the course
{
  for(int i=0;i<size;i++)
  {
    cout << c[i].getCourseID() << " " << c[i].getCourseName() << " " << c[i].getGrade() << " \n ";
    cout << endl;
  }
}
void swapCourses(Course *c1, Course *c2) // swap 2 course
{
  Course temp = *c1;
  *c1 = *c2;
  *c2 = temp;
}
int partition(Course *c, int s, int e)
{
  int pivot = c[e].getCourseID(); // pivot value is the last
  int i = (s - 1);
  for(int j=s;j<e;j++)
  {
    if(c[j].getCourseID()<=pivot)
    {
      i++;
      swapCourses(&c[i], &c[j]);
    }
  }
  swapCourses(&c[i+1], &c[e]);
  return i+1;
}
void quickSort(Course *c, int s, int e)
{
  if(s<e)
  {
    int p = partition(c,s,e);
    quickSort(c, s, p-1);
    quickSort(c,p+1, e);
  }
}


int main()
{
  // use the previous data
  Course courses[10];
  courses[0].setCourseID(10001111);
  courses[0].setCourseName("James");
  courses[0].setGrade(100);

  courses[1].setCourseID(10009999);
  courses[1].setCourseName("Brick");
  courses[1].setGrade(80);

  courses[2].setCourseID(10008888);
  courses[2].setCourseName("Amy");
  courses[2].setGrade(90);

  courses[3].setCourseID(10007771);
  courses[3].setCourseName("Bill");
  courses[3].setGrade(100);

  courses[4].setCourseID(10009900);
  courses[4].setCourseName("John");
  courses[4].setGrade(10);

  courses[5].setCourseID(10006677);
  courses[5].setCourseName("Kurt");
  courses[5].setGrade(100);

  courses[6].setCourseID(10007766);
  courses[6].setCourseName("Joe");
  courses[6].setCourseID(90);

  courses[7].setCourseID(10007772);
  courses[7].setCourseName("Steph");
  courses[7].setGrade(90);

  courses[8].setCourseID(10005566);
  courses[8].setCourseName("Jack");
  courses[8].setGrade(80);

  courses[9].setCourseID(10007773);
  courses[9].setCourseName("Zack");
  courses[9].setGrade(90);

  cout << " Before sorting \n " << endl;
  printCourses(courses,10);
  quickSort(courses, 0 ,9); // display before sort

  cout << endl;

  cout << " After sorting \n" << endl;
  printCourses(courses,10);

  return 0;
}