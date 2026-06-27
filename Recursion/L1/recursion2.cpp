#include <bits/stdc++.h>
using namespace std;

void Print(int n)
{
  if (n == 0)
    return;
  cout << n << "\n";
  Print(n - 1);
}

int main()
{
  Print(10);
  return 0;
}