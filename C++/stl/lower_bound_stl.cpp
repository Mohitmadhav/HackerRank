//Problem Statement: https://www.hackerrank.com/challenges/cpp-lower-bound/problem?h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;int element;
    vector<int>v(n);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        v.push_back(element);
    }
    
    int queries;
    cin>>queries;
    
    while(queries--){
        int y;
        vector<int>::iterator low;
        
        cin>>y;
        low= lower_bound(v.begin(),v.end(),y);
        
        int res=low-v.begin();
        if(v[res]==y){
            cout<<"Yes "<<res<<endl;
        }
        
        
        else {
        cout<<"No "<<res<<endl;
        }
    }
    return 0;
}
