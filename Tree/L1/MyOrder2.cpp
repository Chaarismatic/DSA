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
void MyOrder2(Node *root)
{
  if (root == NULL)
    return;
  MyOrder2(root->right);
  cout << root->data << "->";
  MyOrder2(root->left);
}