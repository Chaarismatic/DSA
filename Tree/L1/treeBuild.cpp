#include "Inorder.h"
#include "PreOrder.h"
#include "PostOrder.h"
#include "MyOrder1.h"
#include "MyOrder2.h"
#include "MyOrder3.h"

#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node *left;
  Node *right;

  Node(int val){
    data = val;
    left = right = NULL;
  }
};

int main(){
  int x;
  cin>>x;
  int leftVal , rightVal ;
  Node *root = new Node(x);
  queue<Node*>q;
  q.push(root);
  while(!q.empty()){
    Node *temp = q.front();
    q.pop();
    cout << "Enter the " << temp->data << " left node";
    cin>>leftVal;
    if(leftVal != -1){
      temp->left = new Node(leftVal);
      q.push(temp->left);
    }
    cout<<"Enter the "<<temp->data<<" right node";
    cin>>rightVal;
    if(rightVal!=-1){
      temp->right = new Node(rightVal);
      q.push(temp->right);
    }
  }

  preOrder(root);
  cout<<endl;
  postOrder(root);
  cout<<endl;
  inOrder(root);
  cout<<"\n";
  MyOrder1(root);
  cout<<"\n";
  MyOrder2(root);
  cout<<"\n";
  MyOrder3(root);
  cout<<"\n";
  return 0;
}
