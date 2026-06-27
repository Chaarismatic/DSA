#include<bits/stdc++.h>
using namespace std;

void PrintNumber(int i,int n){
  if(i==n+1) return;
  cout<<i<<endl;
  PrintNumber(i+1,n);
}

int main(){
  int n ;
  cin>>n;
  PrintNumber(1,n);
  return 0;
}