#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};

void traverse(Node* head){
    Node* temp = head;
    while (temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

int main(){
    Node n1,n2,n3;
    Node*head = &n1;

    n1.val=10;
    n2.val=30;
    n3.val=40;

    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;

    traverse(head);
    return 0;
}

