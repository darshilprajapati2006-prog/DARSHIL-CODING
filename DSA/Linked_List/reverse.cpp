//reverse linklist
#include<iostream>
using namespace std;
 class node{
        public:
        int data;
        node* next;
        node(int val){
            data=val;
            next=NULL;
        }
 };
    void insert(node* &head,int val){
        node* n=new node(val);
        if(head==NULL){
            head=n;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }

    void reverse(node* &head){
        node* prev=NULL;
        node* curr=head;
        node* nextptr;
        while(curr!=NULL){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        head=prev;
    }
    int main(){
        node* head=NULL;
        insert(head,1);
        insert(head,2);
        insert(head,3);
        insert(head,4);
        insert(head,5);
        cout<<"Original List: ";
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        reverse(head);
        cout<<"Reversed List: ";
        temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        return 0;
    }
