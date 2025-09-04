#include<iostream>
using namespace std;
int main(){

    class Node{

        public:

        int val;
        Node* next;

        Node(int val){

            this->val = val;
            this->next = NULL;
        }

        void append(int val){

            Node* a = new Node(val);

            Node* temp = head;

            while(temp != NULL){

                temp = temp->next;

            }

            temp->next = a;
        }
    }
}