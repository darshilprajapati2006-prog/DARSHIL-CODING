#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(node* head){
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    
}
int length(node* head){
    int len = 0;
    node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void deletemid(node* head){
    node*temp=head;
    int len = length(head);
    int midIdx=len/2;
    for(int i=1;i<=midIdx-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    len--;
}

int main(){
    int n;
    cout << "Enter number of nodes (even or odd): ";
    cin >> n;

    if(n <= 0){
        cout << "Invalid size" << endl;
        return 0;
    }

    int x;
    cout << "Enter values: ";
    cin >> x;
    node* head = new node(x);
    node* temp = head;

    for(int i = 2; i <= n; i++){
        cin >> x;
        node* newNode = new node(x);
        temp->next = newNode;
        temp = newNode;
    }

    display(head);
    cout << endl;
    cout << length(head) << endl;

    deletemid(head);

    cout << endl;
    display(head);
    cout << endl;
    cout << length(head) << endl;
}
