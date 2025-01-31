#include<bits/stdc++.h>
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

void construct(vector<int> &v, int n){
    Node* root = new Node(v[0]);
queue<Node*> q;
q.push(root);
int i = 1;
int j = 2;
while(i < n && q.size()>0){
    Node* temp = q.front();
    q.pop();
    Node* left;
    Node* right;
    if(v[i] != INT_MIN) left = new Node(v[i]);
    else left = NULL;
    if(v[j] != INT_MIN) right = new Node(v[j]);
    else right = NULL;
    temp->left = left;
    temp->right = right;
    if(left != NULL) q.push(left);
    if(right != NULL) q.push(right);
    i+=2;
    j+=2;
}
return;
}
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(INT_MIN);
    v.push_back(INT_MIN);
    v.push_back(4);
    v.push_back(6);
    int n = v.size();
    construct(v,n);
}