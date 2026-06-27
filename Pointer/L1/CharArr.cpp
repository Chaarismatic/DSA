#include<bits/stdc++.h>
using namespace std;
int main(){
  char arr[5] = {'a','b','c','d','e'};
  cout<<arr<<endl;
  char *ptr = arr;
  cout<<ptr<<endl;
  cout<<(void *)ptr;
  return 0;
}