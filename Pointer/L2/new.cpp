#include<bits/stdc++.h>
using namespace std;
int main(){
  // int *p = new int(10);
  // cout<<p<<"\n";
  // cout<<*p;

  // int *p = new int[5];
  // *(p) = 1;
  // *(p+1) = 2;
  // *(p+2) = 3;
  // *(p+3) = 4;
  // *(p+4) = 5;
  // // int *x = p;
  // // cout<<*p<<endl;
  // // cout<<*x;

  // // int *p = new int[5];
  // int *x = p;
  // delete[] p;
  // // cout<<x[0];
  // cout<<x[3];
  
  int **arr = new int*[5];
  for(int i = 0;i<5;i++){
    arr[i] = new int[5];
  }

  for(int i = 0;i<5;i++){
    for(int j = 0;j<5;j++){
      cin>>arr[i][j];
    }
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cout << arr[i][j]<<" ";
    }
    cout<<"\n";
  }

  return 0;
}