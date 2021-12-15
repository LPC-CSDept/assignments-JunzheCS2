#include "student.hpp"
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<Student*> arr;
  string line;
  ifstream file("student.txt"); // read the file
  if(file.is_open())
  {
    while(getline(file,line))
    {
      string s1 = line;
      istringstream is(s1);
      int i = 0;
      int id = 0;
      string name;
      int score1 = 0;
      int score2 = 0;
      int score3 = 0;
      string temp;
      while(is >> temp) // while loop 
      {
        if(i==0)
        {
          id = stoi(temp);
          i++;
        }
        else if(i==1)
        {
          name = temp;
          i++;
        }
        else if(i==2)
        {
          score1 = stoi(temp);
          i++;
        }
        else if(i==3)
        {
          score2 = stoi(temp);
          i++; 
        }
        else if(i==4)
        {
          score3 = stoi(temp);
          i++;
        }
      }
    Student *s = new Student(id, name,score1,score2,score3); // create a student object and add it to the vector
    arr.push_back(s); 
    }
    file.close(); // close the file
  }

  else cout << " unable to open the file " <<endl;

  sort(arr.begin(),arr.end(),compare);

  for(int i=0;i<arr.size();i++)
  {
    cout << arr[i]->getId()<<" " << arr[i]->getName() << " " << arr[i]->getScore1() << " " << arr[i]->getScore2() << " " << arr[i]->getScore3() << endl;
  }

  int id; // create a user input
  cout << " please enter the id " <<endl;
  cin >> id; // ask for user input 
  searchId(id,arr);
  return 0;
}