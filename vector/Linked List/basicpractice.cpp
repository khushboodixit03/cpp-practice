#include<iostream>
using namespace std;
class Node{
public:
int val;
Node* next;

Node(int val){
    this->val = val;
    this->next = NULL;
}
};
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* a = new Node(55);
    Node* b = new Node(60);
    Node* c = new Node(65);

    a->next = b; 
    b->next = c; 
    c->next = NULL;
    display(a);
}