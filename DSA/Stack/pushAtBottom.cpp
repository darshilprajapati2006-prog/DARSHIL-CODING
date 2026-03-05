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
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    stack<int> temp;
    
    //empty st to temp
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //empty st to push bottom any element

    st.push(60);

    //empty temp to st
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
   
    print(st);
}
