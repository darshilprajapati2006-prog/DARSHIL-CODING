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
    stack<int> gt;
    stack<int> rt;
    //empty st to gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    //empty gt to rt
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();
    }
    //empty rt to st
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    print(st);
}
