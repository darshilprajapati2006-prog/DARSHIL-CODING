#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        vector<int>a;
        int n;
        cin >> n;
        vector<int> v;
        for(int j=0;j<n;j++)
        {
            cin >> v[j];
        }
        for(int k=0;k<n;k++)
        {
            int count=0;
            for(int l=k;;l++)
            {
                if(l==n-1)
                    break;
                if(v[l]>v[l+1])
                {count++;}
                else
                {break;}
            }
            a.push_back(count);
        }
        

        for(int m=0;m<a.size();m++)
        {
            cout << a[m] << " ";
        }
    }
    
    return 0;
}