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
  int sumOfBinaryTree(TreeNode *root)
  {
    // code here
    if (root == NULL)
      return 0;
    return (root->val) + sumOfBinaryTree(root->left) + sumOfBinaryTree(root->right);
  }
};