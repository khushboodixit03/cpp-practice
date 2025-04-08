#include<iostream>
#include<vector>
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
        
        while(temp->next!=NULL){
            temp = temp->next;

        }

        temp->next = a;
    }
}

void middle(Node* &head)
{
    vector<int> v;
    Node* temp = head;

    while(temp!=NULL)
    {
        v.push_back(temp->val);
        temp = temp->next; 
    }

    temp = head;

    int mid = v.size()/2; 

    cout<<v[mid];
}
int main(){
 int n;
 cout<<"enter the size of vector: ";
 cin>>n;

 vector<int> v(n);
 for(int i = 0; i < n; i++){
    cin>>v[i];
 }
 Node* head = NULL;

 for(int i = 0 ; i < v.size() ; i++)
 {
    append(head,v[i]);
 }

 middle(head);
}