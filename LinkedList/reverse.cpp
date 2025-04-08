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

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = a;
    }

}
void display(Node* head){
    if(head == NULL) cout<<"NULL";
    else{
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val;
            temp = temp->next;
        }
    }
}

void reverse(Node* &head)
{
    vector<int> k; 

    Node* temp = head;

    while(temp!=NULL)
    {
        k.push_back(temp->val);
        temp = temp->next; 
    }

    temp = head;

    reverse(k.begin(),k.end()); 

    for(int i = 0 ; i < k.size() ; i++)
    {
        temp->val = k[i];
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

    for(int i = 0; i < v.size(); i++){
        append(head, v[i]);
    }

    reverse(head); 

    display(head);
}
