struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
  vector<int> largestValues(TreeNode *root)
  {
    // code here
    vector<int> Values;
    queue<TreeNode *> q;
    // if(!root) return;
    q.push(root);
    while (!q.empty())
    {
      int ans = INT_MIN;
      int len = q.size();
      while (len--)
      {
        TreeNode *temp = q.front();
        q.pop();

        if (temp->left)
          q.push(temp->left);
        if (temp->right)
          q.push(temp->right);

        ans = max(ans, temp->val);
      }
      Values.push_back(ans);
    }
    return Values;
  }
};