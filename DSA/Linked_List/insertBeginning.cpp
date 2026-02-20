#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};

void insertAtBeginning(Node* &head, int val){

    Node* temp = new Node;

    if(temp == NULL){
        cout<<"OVERFLOW"<<endl;
        return;
    }

    temp->val = val;
    temp->next = head;
    head = temp;
}

void traverse(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){

    Node* head = NULL;

    // Create existing linked list: 10 -> 20 -> 30
    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->val = 10;
    n2->val = 20;
    n3->val = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head = n1;

    cout<<"Existing Linked List: ";
    traverse(head);
    cout<<endl;

    int val;
    cout<<"Enter value to insert at beginning: ";
    cin>>val;

    insertAtBeginning(head, val);

    cout<<"After Insertion: ";
    traverse(head);

    cout<<endl;
    return 0;
}