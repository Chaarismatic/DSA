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
void MyOrder3(Node *root)
{
  if (root == NULL)
    return;
  MyOrder3(root->right);
  MyOrder3(root->left);
  cout << root->data << "->";
}