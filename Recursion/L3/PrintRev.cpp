#include <bits/stdc++.h>
using namespace std;

// void Print(int arr[], int index, int n)
// {
//   if (index == n)
//     return;
//   Print(arr, index + 1, n);
//   cout << arr[index] << endl;
// }

void Print(int arr[],int index){
  if(index==-1)return;
  cout<<arr[index]<<endl;
  Print(arr,index-1);
}


int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  // Print(arr, 0, 5);
  Print(arr,4);
  return 0;
}