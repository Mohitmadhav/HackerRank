#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n;int x;
    vector<int>v;
    
    cin>>n; 
    
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    
    int idx,l,r;
    
    cin>>idx;
    v.erase(v.begin()+idx-1);
    
    cin>>l>>r;
    v.erase(v.begin()+l-1,v.begin()+r-1);
    
    cout<<v.size()<<endl;
    
   for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
   }
    
    cout<<endl;
    return 0;
}
