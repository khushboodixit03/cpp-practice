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

int levels(Node* root){
  if(root == NULL) return 0;
  int level = 1 + max(levels(root->left), levels(root->right));
  return level;
}

void nthlevel(Node* root, int current, int level){
    if(root == NULL) return;
    if(current == level) cout<<root->val<<" ";
    nthlevel(root->left, current+1, level);
    nthlevel(root->right, current+1, level);
}

void levelorder(Node* root){
    int n = levels(root);
    for(int i = 1; i <= n; i++){
        nthlevel(root, 1, i);
    }
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
  
  levelorder(a);
}