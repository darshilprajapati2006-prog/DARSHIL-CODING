#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int a){
        val=a;
        next=NULL;
    }
};

int display(Node* temp){
        int n=0;

        while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
        n++;

    }
    return n;
};
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void displayrev(Node* head){
    if(head==NULL) return;
    displayrev(head->next);
    cout<<head->val<<" ";
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    
    a->next = b;
    b->next = c;
    c->next = d;

    int n = display(a);
    cout<<endl;
    cout<<n<<endl;
    displayrec(a);
    cout<<endl;
    displayrev(a);
}  
