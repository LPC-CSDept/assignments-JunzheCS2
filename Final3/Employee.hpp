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
  //getters and setters
    void setName(string name)
    {
      this->name = name;
    }

    void setEmployeeNumber(int employeeNumber)
    {
      this->employeeNumber = employeeNumber;
    }

    void setHireDate(string hireDate)
    {
      this->hireDate = hireDate;
    }

    string getName()
    {
      return this->name;
    }

    int getEmployeeNumber()
    {
      return this->employeeNumber;
    }

    string getHireDate()
    {
      return this->hireDate;
    }
}

class ProductWorker