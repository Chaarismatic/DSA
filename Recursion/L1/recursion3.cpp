#include<bits/stdc++.h>
using namespace std;

void PrintEven(int n){
  if(n<=0) return;
  if(n%2==0){
    cout<<n<<endl;
    PrintEven(n-2);
  }
  else{
    PrintEven(n-1);
  }
}

int main(){
  PrintEven(12);
  cout<<"For Odd"<<endl;
  PrintEven(13);
  return 0;
}