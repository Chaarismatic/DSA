#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = right = NULL;
  }
};
void inOrder(Node *root)
{
  if (root == NULL)
    return;
  inOrder(root->left);
  cout << root->data<<"->";
  inOrder(root->right);
}