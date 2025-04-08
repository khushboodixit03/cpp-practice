#include<iostream>
#include<vector>
#include<algorithm>
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
void append(Node* &head, int val){

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
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val;
        temp = temp->next;
    }
}

void sorted(Node* &head)
{
    vector<int> v; 

    Node* temp = head; 

    while(temp!=NULL)
    {
        v.push_back(temp->val);
        temp = temp->next; 
    }

    temp = head; 
    
    sort(v.begin(),v.end()); 

    for(int i = 0; i < v.size(); i++){
        temp->val = v[i];
        temp = temp->next;
    }

}

int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
 
    Node* head = NULL; 

    for(int i = 0 ; i < n ; i++)
    {
       append(head,v[i]);
    }
    display(head);
    sorted(head); 
    display(head);
}