#include "Employee.hpp"

void findHighestHourlyPayRate(ProductWorker *prodWorkers, int size)
{
  int highidx = 0;
  int highPay = 0;
  for(int i=0;i<10;i++)
  {
    if(prodWorkers[i].getHourlyPayRate() > highPay)
    {
      highPay = prodWorkers[i].getHourlyPayRate();
      highidx = i;
    }
  }

  cout << "\n Employee with the highest Hourly Pay rate is\n";
  cout << prodWorkers[highidx].getEmployeeNumber() << " " << prodWorkers[highidx].getName() << " " << prodWorkers[highidx].getHireDate() << " " << prodWorkers[highidx].getHourlyPayRate() << " " << prodWorkers[highidx].getShift() << "\n"; 
}

void printAll(ProductWorker *prodWorkers, int size)
{
  for(int i=0;i<size;i++)
  {
    cout << prodWorkers[i].getEmployeeNumber() << " " << prodWorkers[i].getName() << " " << prodWorkers[i].getHireDate() << " " << prodWorkers[i].getHourlyPayRate() << " " << prodWorkers[i].getShift() << "\n";
    cout << endl;
  }
}

int main()
{
  ProductWorker prodWorkers[10]; //create 10
  prodWorkers[0].setName("James");
  prodWorkers[0].setEmployeeNumber(10001111);
  prodWorkers[0].setHireDate("12/01/2021");
  prodWorkers[0].setShift(1);
  prodWorkers[0].setHourlyPayRate(10);

  
  prodWorkers[1].setName("Brick");
  prodWorkers[1].setEmployeeNumber(10009999);
  prodWorkers[1].setHireDate("12/02/2021");
  prodWorkers[1].setShift(2);
  prodWorkers[1].setHourlyPayRate(30);

  
  prodWorkers[2].setName("Amy");
  prodWorkers[2].setEmployeeNumber(10008888);
  prodWorkers[2].setHireDate("12/03/2021");
  prodWorkers[2].setShift(3);
  prodWorkers[2].setHourlyPayRate(15);

  
  prodWorkers[3].setName("Bill");
  prodWorkers[3].setEmployeeNumber(10007771);
  prodWorkers[3].setHireDate("12/04/2021");
  prodWorkers[3].setShift(4);
  prodWorkers[3].setHourlyPayRate(11);

  
  prodWorkers[4].setName("Johnnn");
  prodWorkers[4].setEmployeeNumber(10009900);
  prodWorkers[4].setHireDate("12/05/2021");
  prodWorkers[4].setShift(5);
  prodWorkers[4].setHourlyPayRate(5);

  
  prodWorkers[5].setName("Kurt");
  prodWorkers[5].setEmployeeNumber(10006677);
  prodWorkers[5].setHireDate("12/06/2021");
  prodWorkers[5].setShift(6);
  prodWorkers[5].setHourlyPayRate(6);

  
  prodWorkers[6].setName("Joe");
  prodWorkers[6].setEmployeeNumber(10007766);
  prodWorkers[6].setHireDate("12/07/2021");
  prodWorkers[6].setShift(3);
  prodWorkers[6].setHourlyPayRate(9);

  
  prodWorkers[7].setName("Steph");
  prodWorkers[7].setEmployeeNumber(10007772);
  prodWorkers[7].setHireDate("12/08/2021");
  prodWorkers[7].setShift(4);
  prodWorkers[7].setHourlyPayRate(20);

  
  prodWorkers[8].setName("Jack");
  prodWorkers[8].setEmployeeNumber(10005566);
  prodWorkers[8].setHireDate("12/06/2021");
  prodWorkers[8].setShift(4);
  prodWorkers[8].setHourlyPayRate(25);

  
  prodWorkers[9].setName("Zack");
  prodWorkers[9].setEmployeeNumber(10007773);
  prodWorkers[9].setHireDate("12/23/2021");
  prodWorkers[9].setShift(4);
  prodWorkers[9].setHourlyPayRate(17);
}