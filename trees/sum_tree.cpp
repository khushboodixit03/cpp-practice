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

void display(Node* root){

  if(root == NULL) return ;
  
  cout<<root->val<<" ";
  display(root->left);
  display(root->right);
}

int sum(Node* root){

  if(root == NULL) return 0;
  int sumnode = root->val + sum(root->left) + sum(root->right);
  return sumnode;
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
  cout<<endl;
  display(a);
  cout<<endl;
  cout<<sum(a);
}