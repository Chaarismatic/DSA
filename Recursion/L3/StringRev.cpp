void Rev(string &s, int start, int end)
{
  if (start >= end)
    return;
  swap(s[start], s[end]);
  Rev(s, start + 1, end - 1);
}

string reverseString(string &s)
{
  // Your code here
  int start = 0, end = s.length() - 1;
  Rev(s, start, end);
  return s;
}