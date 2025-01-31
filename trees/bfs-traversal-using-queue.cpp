#include<iostream>
#include<queue>
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

void bfstraversal(Node* root){
queue<Node*> q;
q.push(root);
while(q.size() > 0){
    Node* temp = q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left != NULL)
    q.push(temp->left);
    if(temp->right != NULL)
    q.push(temp->right);
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
  cout<<a->val;
  cout<<endl;
  bfstraversal(a);
}