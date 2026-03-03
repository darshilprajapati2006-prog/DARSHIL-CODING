#include<iostream>
using namespace std;
class DLL{
public:
    int val;
    int size;
    DLL* next;
    DLL* prev;
    DLL* head;
    DLL* tail;


    DLL(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    } 

    int getSize(){
    DLL*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

    void display(){
    DLL*temp= head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

    DLL(){
        head=tail=NULL;
        size = 0;
    } 

void insertAtTail(int val){
    DLL* temp =new DLL(val);
    if(size==0){
        head=tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    size++;
}

    void insertAtHead(int val){
    DLL* temp =new DLL(val);
    if(size==0){
        head=tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    size++;
}

    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"invalid index"<<endl;
        }
        else if(idx==0){
            insertAtHead(val);
        }
        else if(idx==size-1){
            insertAtTail(val);
        }
        else{
            DLL* t = new DLL(val);
            DLL* temp =head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;
            t->next->prev=t;
            size++;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        DLL* temp = head;
        head = head->next;
        if(head!=NULL) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        if(size==1){
            deleteAtHead();
            return;
        }
        DLL* temp = tail->prev;
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
        DLL* temp = head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        
        temp->next = temp->next->next;
        temp->next->prev=temp;
        size--;
    }

     int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid index";
            return -1;
        }
        else if(idx==0){
            return head->val;
        }
        else if(idx==size-1){
            return tail->val;
        }
        else{
            if(idx<size/2){
            DLL* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
            }
            else{
                DLL* temp=tail;
                for(int i=1;i<size-idx;i++){
                temp=temp->prev;
                }
                return temp->val;
            }
        }    
    }
};

int main(){
    DLL ll;
    DLL *a = new DLL(10);
    DLL *b = new DLL(20);
    DLL *c = new DLL(30);
    DLL *d = new DLL(40);
    
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;
    
    d->prev=c;
    c->prev=b;
    b->prev=a;
    a->prev=NULL;
    
    ll.head = a;
    ll.tail = d;
    ll.size = 4;

    cout<<"size : "<<ll.getSize()<<endl;
    ll.display();
    cout<<endl;

    ll.insertAtTail(50);
    cout<<"size : "<<ll.getSize()<<endl;
    ll.display();
    cout<<endl;

    ll.insertAtHead(60);
    cout<<"size : "<<ll.getSize()<<endl;
    ll.display();
    cout<<endl;

    ll.insertAtIdx(3,45);
    cout<<"size : "<<ll.getSize()<<endl;
    ll.display();
    cout<<endl;

   
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

   

    ll.deleteAtIdx(2);
    cout<<endl;
    cout<<"After delete at idx 2:"<<endl;
    ll.display();
    cout<<endl;
    cout<<"size : "<<ll.getSize()<<endl<<endl;

    cout<<"index value : "<<ll.getAtIdx(2)<<endl;
}