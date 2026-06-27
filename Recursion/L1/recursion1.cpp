#include<bits/stdc++.h>
using namespace std;

void Birthday(int n){
  if(n==0){
    cout<<"Happy Birthday";
    return;
  }
  cout<<n<<" days remaining for Birthday."<<"\n";
  Birthday(n-1);
}

int main(){
  Birthday(30);
  return 0;
}