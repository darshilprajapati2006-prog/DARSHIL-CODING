#include<iostream>
using namespace std;
class Node{
public:
    int val;
    int size;
    Node* next;
    Node* head;
    Node* tail;

    Node(int a){
        val=a;
        next=NULL;
    } 

    int getSize(){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

    void display(){
    Node*temp= head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

    Node(){
        head=tail=NULL;
        size = 0;
    } 

    void insertAtEnd(int val){
    Node* temp =new Node(val);
    if(size==0){
        head=tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
}

    void insertAtBeginning(int val){
    Node* temp =new Node(val);
    if(size==0){
        head=tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
    size++;
}

    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"invalid index"<<endl;
        }
        else if(idx==0){
            insertAtBeginning(val);
        }
        else if(idx==size){
            insertAtEnd(val);
        }
        else{
            Node* t = new Node(val);
            Node* temp =head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid index";
            return -1;
        }
        else if(idx==0){
            return head->val;
        }
        else if(idx==size){
            return tail->val;
        }
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        if(size==1){
            head = tail = NULL;
            size--;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid index"<<endl;
            return;
        }
        if(idx==0){
            deleteAtHead();
            return;
        }
        if(idx==size-1){
            deleteAtTail();
            return;
        }
        Node* temp = head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        
        temp->next = temp->next->next;
        size--;
    }
};

int main(){
    Node ll;
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    
    ll.head = a;
    ll.tail = d;
    ll.size = 4;

    cout<<"size : "<<ll.getSize()<<endl;
    ll.display();
    cout<<endl;

    ll.insertAtEnd(50);
    cout<<"size : "<<ll.getSize()<<endl;
    ll.display();
    cout<<endl;

    ll.insertAtEnd(60);
    cout<<"size : "<<ll.getSize()<<endl;
    ll.display();
    cout<<endl;

    ll.insertAtBeginning(70);
    cout<<"size : "<<ll.getSize()<<endl;
    ll.display();
    cout<<endl;

    ll.insertAtIdx(0,45);
    cout<<"size : "<<ll.getSize()<<endl;
    ll.display();
    cout<<endl;

    cout<<ll.getAtIdx(3);
    ll.deleteAtHead();
    cout<<endl;
    cout<<"After delete head:"<<endl;
    ll.display();
    cout<<endl;
    cout<<"size : "<<ll.getSize()<<endl;

    ll.deleteAtTail();
    cout<<endl;
    cout<<"After delete tail:"<<endl;
    ll.display();
    cout<<endl;
    cout<<"size : "<<ll.getSize()<<endl;

   

    ll.deleteAtIdx(1);
    cout<<endl;
    cout<<"After delete at idx 2:"<<endl;
    ll.display();
    cout<<endl;
    cout<<"size : "<<ll.getSize()<<endl;
}