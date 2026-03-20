#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
class Node{
public:
    int val;  
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void displaytree(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    displaytree(root->left);
    displaytree(root->right);
}

int sumtree(Node* root){
    if(root==NULL) return 0;
    int sum = root->val+sumtree(root->left)+sumtree(root->right);
    return sum;
}

int product_tree(Node* root){
    if(root==NULL) return 1;
    int product = root->val*product_tree(root->left)*product_tree(root->right);
    return product;
}

int sizetree(Node* root){
    if(root==NULL) return 0;
    int size = 1+sizetree(root->left)+sizetree(root->right);
    return size;
}

int maxNodetree(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val, max(maxNodetree(root->left), maxNodetree(root->right)));
}

int minNodetree(Node* root){
    if(root==NULL) return INT_MAX;
    return min(root->val, min(minNodetree(root->left), minNodetree(root->right)));
}

int levelstree(Node* root){
    if(root==NULL) return 0;
    int level = 1+max(levelstree(root->left),levelstree(root->right));
    return level;
}

int main(){
    Node* a = new Node(1);  //root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    displaytree(a);
    cout<<endl;
    cout<<"tree sum : "<<sumtree(a)<<endl;
    cout<<"tree product : "<<product_tree(a)<<endl;
    cout<<"tree size : "<<sizetree(a)<<endl;
    cout<<"tree Max_Node : "<<maxNodetree(a)<<endl;
    cout<<"tree Min_Node : "<<minNodetree(a)<<endl;
    cout<<"tree levels : "<<levelstree(a)<<endl;
}
