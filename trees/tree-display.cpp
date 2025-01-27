#include<iostream>
using namespace std;
class Node{
public:
int val;
Node* left;
Node* right;
//constructor

Node(int val){
  this->val = val;
  this->left = NULL;
  this->right = NULL;
}

};

void display(Node* root)
{
    // base case

    if(root==NULL) return;
    cout<<root->val; 
    // recursion 
    display(root->left);
    display(root->right);
}
int main(){
 Node* a = new Node(23);
  Node* b = new Node(24);
  Node* c = new Node(27);
  Node* d = new Node(25);
  Node* e = new Node(26);

  a->left = b;
  a->right = c;
  b->left = d;
  c->right = e;
  cout<<a->val;

  display(a);
}