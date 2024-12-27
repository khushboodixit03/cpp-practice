#include<iostream>
#include<vector>
#include<algorithm>
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

void insertatend(Node* &head , int data)
{
    Node* t = new Node(data);

    if(head == NULL)
    {
        head = t; 
        return;
    }

    Node* temp = head; 

    while(temp->next!=NULL)
    {
        temp = temp->next; 
    }

    temp->next = t; 
}

void reverse(Node* &head)
{
    vector <int> v; 

    Node* temp = head; 

    while(temp!=NULL)
    {
       v.push_back(temp->val);
       temp = temp->next; 
    }

    temp = head;

    reverse(v.begin(),v.end()); 

    for(int i = 0; i < v.size() ; i++)
    {
        temp->val = v[i];
        temp = temp->next;
    }
}
void display(Node* head)
{
    Node* temp = head; 

    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next; 
    }
}

int main()
{
    Node* head = NULL;

    int n, data;

    cin>>n;

    for(int i = 0 ; i < n ; i++)
    {
        cin>>data; 
        insertatend(head,data);
    }

    reverse(head); 
    display(head); 
}