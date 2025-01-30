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

void nthlevel(Node* root , int current ,int level){

    if(root== NULL) return;
    if(current == level) cout<<root->val;
    nthlevel(root->left,current+1,level);
    nthlevel(root->right,current+1,level);
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
  
  nthlevel(a,1,3);
}