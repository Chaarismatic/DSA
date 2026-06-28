int Linear(vector<int> &arr, int target, int index, int n)
{
  if (index == n)
    return -1;
  if (arr[index] == target)
    return index;
  return Linear(arr, target, index + 1, n);
}

int linearSearch(vector<int> &arr, int target)
{
  // code here
  int index = 0, n = arr.size();
  int ans = Linear(arr, target, index, n);
  return ans;
}