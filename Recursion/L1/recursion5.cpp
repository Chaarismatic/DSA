#include<bits/stdc++.h>
using namespace std;

int SUM(int arr[],int i,int size){
  if(i==size) return 0;
  return arr[i]+SUM(arr,++i,size);
}

int main(){
  int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int size = 20;
  int sum = SUM(arr,0,size);
  cout<<sum;
  return 0;
}