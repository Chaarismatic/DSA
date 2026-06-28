#include<bits/stdc++.h>
using namespace std;

int SUM(int arr[],int index,int n){
  if(index==n) return 0;
  return arr[index] + SUM(arr,index+1,n);
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int sum = SUM(arr,0,10);
  cout<<sum;
  return 0;
}