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

void preorder(Node* root)
{
    if(root == NULL) return;
    cout<<root->val<<" "; // root
    preorder(root->left); // left
    preorder(root->right); // right
}

void inorder(Node* root)
{
    if(root == NULL) return;
    inorder(root->left); // left
    cout<<root->val<<" "; // root
    inorder(root->right); // right
}

void postorder(Node* root)
{
    if(root == NULL) return;
    inorder(root->left); // left
    inorder(root->right); // right
    cout<<root->val<<" "; // root
}

int main(){
 Node* a = new Node(23);
  Node* b = new Node(24);
  Node* c = new Node(26);
  Node* d = new Node(29);
  Node* e = new Node(21);
  Node* f = new Node(28);
  Node* g = new Node(30);


  a->left = b;
  a->right = e;
  b->left = c;
  b->right = d; 
  e->left = f;
  e->right = g; 
  
  preorder(a);
  cout<<endl;
  inorder(a);
  cout<<endl;
  postorder(a);
}