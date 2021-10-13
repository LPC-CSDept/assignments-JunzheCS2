#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

double *makeNumbers(int N);
void printNumbers(double * const ptr, int N);
void sortNumbers(double * const ptr, int N);
void deleteNumbers(double * ptr);


int main()
{
	const 	int N=10;
	double 	*ptr=nullptr;

	ptr = makeNumbers(N);
	cout << " Initial Double Values \n";
	printNumbers(ptr, N);
	sortNumbers(ptr, N);
	cout << " Sorted Double Values \n";
	printNumbers(ptr, N);
	deleteNumbers(ptr);
}

double *makeNumbers(int N)
{
  double *ptr = new double[N];
  srand(time(0));

  for(int i=0;i<N;i++)
  {
    *(ptr+i) = rand()%100+1;
  }

  return ptr;
}

void sortNumbers(double* const ptr, int N)
{
  for(int i =0;i<N-1;i++)
  {
    for(int j = 0;j<N-1;j++)
    {
      if(ptr[j] > ptr[j+1])
        {
          swap(ptr[j],ptr[j+1]);
        }
    }
  }
}

void printNumbers(double* const ptr, int N)
{
  for(int i =0;i<N;i++)
  {
    cout << *(ptr+i) << endl;
  }
}

void deleteNumbers(double *ptr)
{
  delete[] ptr;
}