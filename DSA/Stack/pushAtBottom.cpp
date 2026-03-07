#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
    stack<int> temp;
    //with use of extra temp stack
    while(st.size()>0){
        // cout<<st.top()<<" ";    //print use for reverse order
        int x = st.top();          //means in stack print top to bottom
        st.pop();
        temp.push(x);
    }
    //putting elements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";     //print use for normal order
        int x = temp.top();        //means in stack print bottom to top
        temp.pop();
        st.push(x);
    }
    cout<<endl;
}
void pushAtBottom(stack<int>& st, int val){
    stack<int> temp;
     while(st.size()>0){
        int x = st.top();         
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(temp.size()>0){
        int x = temp.top();        
        temp.pop();
        st.push(x);
    }

}void pushAtIdx(stack<int>& st,int idx,  int val){
    stack<int> temp;
     while(st.size()>idx){
        int x = st.top();         
        st.pop();
        temp.push(x);
    }
    st.push(val);
    while(temp.size()>0){
        int x = temp.top();        
        temp.pop();
        st.push(x);
    }

}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushAtBottom(st,7);
    print(st);
    pushAtIdx(st,2,45);
    print(st);
}
