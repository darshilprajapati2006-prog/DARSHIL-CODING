#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;
int fun(vector<int> v,int x){
    int flag=1;
    for(int i=x;i<v.size()-1;i++){
        if(v[i]<v[i+1]){
            flag=0;
            break;
            
        }
    }
    return flag;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int> v(m);
        for(int j=0;j<m;j++){
            cin>>v[j];
        }
        int x;
        for(x=0;x<m-1;x++){
            int flag=1;
            flag=fun(v,x);
            if(flag==0){
                count++;
            }

        }
    }
    return count;
}
