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
void MyOrder1(Node *root)
{
  if (root == NULL)
    return;
  cout << root->data << "->";
  MyOrder1(root->right);
  MyOrder1(root->left);
}