class Solution
{
public:
  void SUM(vector<int> &arr, int target, int index, int &count, int sum)
  {
    if (index == arr.size())
    {
      if (sum == target)
        count++;
      return;
    }
    if (sum > target)
      return;
    SUM(arr, target, index + 1, count, sum);
    SUM(arr, target, index + 1, count, sum + arr[index]);
  }

  int countSubsetsWithSum(vector<int> &arr, int target)
  {
    // Your code here
    int count = 0;
    SUM(arr, target, 0, count, 0);
    return count;
  }
};