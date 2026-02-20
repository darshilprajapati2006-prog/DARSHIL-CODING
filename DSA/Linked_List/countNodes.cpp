#include<iostream>
using namespace std;

struct Node{
    int val;
    Node* next;
};

int countNode(Node* head){
    int count = 0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
   
    Node n1,n2,n3,n4;
    Node* head = &n1;
    
    n1.val=10;
    n2.val=20;
    n3.val=30;

    n1.next=&n2;
    n2.next=&n3;
    n3.next=NULL;

    cout<<"No of Nodes : "<<countNode(head);
    return 0;

}