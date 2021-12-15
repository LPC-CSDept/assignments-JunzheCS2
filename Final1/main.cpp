#include "Course.hpp"

// Binary search
bool binarySearch(Course *c, int s, int e, int id)
{ 
  int mid = 0;
  if(s < e)
  {
    mid = (s+e)/2;
    if(c[mid].getCourseID() == id)
    {
      return true;
    }
    else if(c[mid].getCourseID() > id)
    {
      e = mid;
    }
    else
    {
      s = mid + 1;
    }
    return binarySearch(c,s,e,id);
  }
  
}

int main()
{
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
  sort(courses, courses + 10);
  // storing 10 objects, I chose the most simple way to do it.

  //test binary search
  if(binarySearch(courses, 0 , 10,10007773))
    cout << " 10007773 is found " << endl;
  else
    cout << " it is not found " << endl;
  cout << endl;

  if(binarySearch(courses, 0 , 10,10001111))
    cout << " 10001111 is found " << endl;
  else
    cout << " it is not found " << endl;
  cout << endl;

  if(binarySearch(courses, 0 , 10,10007772))
    cout << " 10007772 is found " << endl;
  else
    cout << " it is not found " << endl;
  cout << endl;

  if(binarySearch(courses, 0 , 10,10009999))
    cout << " 10009999 is found " << endl;
  else
    cout << " it is not found " << endl;
  cout << endl;

  if(binarySearch(courses, 0 , 10,10002687))
    cout << " 10002687 is found " << endl;
  else
    cout << " it is not found " << endl;
  cout << endl;

  return 0;
  

}