#include<iostream>
#include<algorithm>
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

int maxvalue(Node* root)
{
    int maxval = max(root->val , max(maxvalue(root->left),maxvalue(root->right)));

    return maxval;
}

int level(Node* root)
{
    if(root==NULL) return 0; 

    int levels = 1 + max(level(root->left),level(root->right)); 

    return levels;
}


int main(){
 Node* a = new Node(23); // root node
  Node* b = new Node(24);
  Node* c = new Node(27);
  Node* d = new Node(25);
  Node* e = new Node(26);

  a->left = b; // root node
  a->right = c;
  b->left = d;
  c->right = e;
  cout<<a->val;

  display(a);
  cout<<endl;
  cout<<maxvalue(a); 
  cout<<endl;
  cout<<level(a);
}