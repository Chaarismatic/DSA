// class Solution
// {
// public:
//   void SUBSET(vector<int> &nums, vector<int> temp, vector<vector<int>> &ans, int index)
//   {
//     if (index == nums.size())
//     {
//       ans.push_back(temp);
//       return;
//     }
//     SUBSET(nums, temp, ans, index + 1);
//     temp.push_back(nums[index]);
//     SUBSET(nums, temp, ans, index + 1);
//   }

//   vector<vector<int>> subsets(vector<int> &nums)
//   {
//     // Your code here
//     vector<vector<int>> ans;
//     vector<int> temp;
//     SUBSET(nums, temp, ans, 0);
//     return ans;
//   }
// };

class Solution
{
public:
  void SUBSET(vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans, int index)
  {
    if (index == nums.size())
    {
      ans.push_back(temp);
      return;
    }
    SUBSET(nums, temp, ans, index + 1);
    temp.push_back(nums[index]);
    SUBSET(nums, temp, ans, index + 1);
    temp.pop_back();
  }

  vector<vector<int>> subsets(vector<int> &nums)
  {
    // Your code here
    vector<vector<int>> ans;
    vector<int> temp;
    SUBSET(nums, temp, ans, 0);
    return ans;
  }
};