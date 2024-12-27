#include<iostream>
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

class Linkedlist{
   public:
    Node* head; 
    Node* tail;
    int size; 

    Linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }

    void insertatend(int val)
    {
        Node* temp = new Node(val); 

        if(size==0)
        {
            head = tail = temp; 
        }

        else{
            tail->next = temp;  
            tail = temp; 
        }

        size++;
    }

    void insertatbegin(int val)
    {
        Node* temp = new Node(val); 
    
        temp->next = head;
        head = temp; 

        size++;
    }

    void insertatidx(int val , int idx)
    {
        Node* t = new Node(val); 
        Node* temp = head; 

        if(idx==1) insertatbegin(val);
        if(idx==size) insertatend(val);
       while(temp!=idx)
        {
            t->next = temp->next; 
            temp->next = t; 
        }

        size++;
 
    }

    void deleteatend()
    {
        Node* temp = head; 

        while(temp->next!=tail)
        {
            temp = temp->next; 
        }

        tail = temp; 
        temp->next = NULL;
    }

    void deleteatbegin()
    {
        head = head->next; 
    }

    void deleteatidx(int idx)
    {
        Node* temp = head; 

        while(temp->next != idx)
        {
            temp = temp->next; 
        }

        temp->next = temp->next->next; 
    }

    void display()
    {
        Node* temp = head; 

        while(temp!=NULL)
        {
            cout<<temp->val; 
            temp = temp->next; 
        }
    }
};

int main()
{
    Linkedlist ll; 

    ll.insertatend(20); 
    ll.insertatend(30); 
    ll.insertatend(40);
    ll.display();
}