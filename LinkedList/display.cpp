#include <iostream>
#include <cstdlib>
#include<vector>
using namespace std;

class Node{
    public: 
    int val; 
    Node* next;

    Node(int val)
    {
        this->val = val; 
        this->next = NULL; 
    }
}; 

void append(Node* &head , int val)
{
    Node* a = new Node(val); 
    if(head == NULL) head = a;

    else{
        Node* temp = head; 

        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next = a;
    }
}

void display(Node* head){
    if(head == NULL) cout<<"NULL BSDK"; 

    else{
        Node* temp = head;

        while(temp!=NULL)
        {
            cout<<temp->val; 
            temp = temp->next; 
        }
    }
}

int main() {
  vector<int> v; 
  
  v.push_back(23); 
  v.push_back(26);
  v.push_back(07);
  v.push_back(03);
  v.push_back(13);
  v.push_back(98);

  Node* head = NULL; 

  for(int i = 0 ; i < v.size() ; i++)
  {
    append(head,v[i]); 
  }

  display(head);
}