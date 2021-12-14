#include <iostream>
#include <string>
using namespace std;

int partition(int arr[], int s, int e)
{
  //s = 0;
  //e = size-1;
  int pivot = arr[e];
  int index = s;
  for(int i = s; i < e;i++)
  { 
    if(arr[i] < pivot)
    {
      int temp = arr[i];
      arr[i] = arr[index];
      arr[index] = temp;
      index++;
    }
  }

  int temp = arr[e];
  arr[e] = arr[index];
  arr[index] = temp;
  return index;
}

void quickSort(int arr[], int s, int e)
{
  if(s<e)
  {
    int n = partition(arr, s, e);
    quickSort(arr, s, (n-1)); // from left
    quickSort(arr,n+1,e); // from right
  }
}

int main()
{
  int size = 7;
  int s = 0;
  int e = size -1;
  int arr[7] = {1,8,5,9,4,3,7}; // or arr[size]


  cout << " before sort : " << endl;
  for(int i = 0; i<size;i++)
  {
    cout << arr[i] << " \t";
  }

  cout << endl;

  quickSort(arr, 0, size-1);

  cout << " after sort : " << endl;
  for(int i=0;i<size;i++)
  {
    cout << arr[i] << " \t ";
  }
}