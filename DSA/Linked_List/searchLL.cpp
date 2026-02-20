#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};

Node* search(Node* head, int val){
    Node* temp = head;
    while(temp != NULL){
        if(temp->val == val){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int main(){
    Node n1,n2,n3;
    Node* head = &n1;
    cout<<"Enter value for node 1: ";
    cin>>n1.val;
    cout<<"Enter value for node 2: ";
    cin>>n2.val;
    cout<<"Enter value for node 3: ";
    cin>>n3.val;

    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;

    int val;
    cout<<"Enter value to search: ";
    cin>>val;
    Node*result = search(head,val);
    if(result!=NULL)
    cout<<"value found : "<<result->val;
    else
    cout<<"Value not found";
    return 0;
}