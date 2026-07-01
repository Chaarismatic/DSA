class Solution
{
public:
  void COUNT(vector<int> &arr, int target, long long &ans, int sum)
  {
    if (sum == target)
    {
      ans++;
      return;
    }
    if (sum > target)
      return;
    for (int i = 0; i < arr.size(); i++)
    {
      COUNT(arr, target, ans, sum + arr[i]);
    }
  }

  long long countWays(vector<int> &arr, int target)
  {
    // Code here
    long long ans = 0;
    COUNT(arr, target, ans, 0);
    return ans;
  }
};