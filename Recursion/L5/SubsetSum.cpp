class Solution
{
public:
  void SUM(vector<int> &arr, vector<int> &ans, int index, int sum)
  {
    if (index == arr.size())
    {
      ans.push_back(sum);
      return;
    }
    SUM(arr, ans, index + 1, sum);
    sum += arr[index];
    SUM(arr, ans, index + 1, sum);
  }

  vector<int> subsetSums(vector<int> &arr)
  {
    // Your code here
    vector<int> ans;
    SUM(arr, ans, 0, 0);
    return ans;
  }
};