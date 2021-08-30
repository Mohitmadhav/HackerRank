//Problem Statement: https://www.hackerrank.com/challenges/cpp-sets/problem?h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int queries;
    cin>>queries;
    set<int>s;
    
    while (queries--) {
        int y,x;
        cin>>y>>x;
        
        switch (y) {
        case 1: s.insert(x);
                break;
        
        case 2: s.erase(x);
                break;
        
        case 3:(s.find(x)!=s.end())?cout<<"Yes"<<endl:cout<<"No"<<endl;
        break;
        
        
        }
    }  
    return 0;
}





