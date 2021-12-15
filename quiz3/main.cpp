#include "numbers.hpp"
#include<cstdlib>
#include<ctime>

using namespace std;

int findMax(Numbers[], int);
void deDup(Numbers &, Numbers &);

int main()
{
  const int N =5;
  srand(time(0));
  Numbers numberset[] = {Numbers(1,5), Numbers(2,5),Numbers(3,10),Numbers(4,5),Numbers(5,7)};

  for(int i = 0;i<N;i++)
  {
    cout << " Number Set ID " << numberset[i].getID() << "\t\n";
    numberset[i].printAll();
  }

  int id = findMax(numberset,N);

  cout << " the set ID that has max difference is " << id << "\t";
  cout << " The diff is " << numberset[id].getMax() - numberset[id].getMin() << endl;

  deDup(numberset[2], numberset[3]);
  cout << " ID 3 - ID 4\n";
  numberset[2].printAll();

  deDup(numberset[0],numberset[1]);
  cout << "ID 1 - ID 2\n";
  numberset[0].printAll();
}

int findMax(Numbers n[], int size) // add findmax with n[] and size, set the different value to 0 and create 2 integers. I used the for loop to get the max difference then compare the values between max and diff. If max > diff then diff = max. 
{
  int diff = 0;
  int ID;
  int max;

  for(int i = 0; i < size; i++)
  {
    max = n[i].getMax() - n[i].getMin();

    if(max > diff)
    {
      diff = max;
      ID = n[i].getID();
    }
  }
  return ID;
}

void deDup(Numbers &n1, Numbers &n2) // add dedup. This one is easier to set up, a for loop through the deleteElm. Still not sure why ID3 - ID4 not showing.
{
  for(int i=0;i<n2.getSize(); i++)
  {
    n1.deleteElm(n2.getElm(i));
  }
}