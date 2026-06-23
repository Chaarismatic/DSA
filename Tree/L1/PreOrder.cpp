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
void preOrder(Node *root)
{
  if(root==NULL) return;
  cout<<root->data<<"->";
  preOrder(root->left);
  preOrder(root->right);
}