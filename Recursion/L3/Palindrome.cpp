#include<bits/stdc++.h>
using namespace std;

bool Palindrome(string str,int start,int end){
  if(start>=end) return true;
  if(str[start]!=str[end])return false;
  return Palindrome(str,start+1,end-1);

}

int main(){
  string str = "reddit";
  int start = 0, end = str.length()-1;
  bool isPalindrome = Palindrome(str,start,end);
  if(isPalindrome==true)cout<<"Palindrome";
  else cout<<"Not Palindrome";
  return 0;
}