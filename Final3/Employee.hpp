#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee // create employe class
{
  private:
    string name;
    int employeeNumber;
    string hireDate;
  public:
    Employee() //constructor
    {
      this->name = " ";
      this->employeeNumber = 0;
      this->hireDate = " ";
    }

    void setName(string name)
    {
      this->name = name;
    }

    void setEmployeeNumber(int employeeNumber)
    {
      this->employeeNumber = employeeNumber;
    }
}