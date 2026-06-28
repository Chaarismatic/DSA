#include<bits/stdc++.h>
using namespace std;

// void Print(int arr[],int index,int n){
//   if(index==n)return;
//   cout<<arr[index]<<endl;
//   Print(arr,index+1,n);
// }

void Print(int arr[],int index){
  if(index==-1)return;
  Print(arr,index-1);
  cout<<arr[index]<<endl;
}


int main(){
  int arr[] = {1,2,3,4,5};
  // Print(arr,0,5);
  Print(arr,4);
  return 0;
}