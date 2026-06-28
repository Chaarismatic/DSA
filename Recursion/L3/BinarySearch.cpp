class Solution
{
public:
  int Search(vector<int> &nums, int target, int low, int high)
  {
    if (low > high)
      return -1;
    int mid = low + (high - low) / 2;
    if (nums[mid] == target)
      return mid;
    else if (nums[mid] > target)
      high = mid - 1;
    else
      low = mid + 1;
    return Search(nums, target, low, high);
  }

  int search(vector<int> &nums, int target)
  {
    int low = 0, high = nums.size() - 1;
    int ans = Search(nums, target, low, high);
    return ans;
  }
};