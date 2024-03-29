//Problem Statement: https://www.hackerrank.com/challenges/preprocessor-solution/problem

/* Enter your macros here */
#define FUNCTION(comp,logo) void comp(int &a,int b){(a logo b)?true:a=b;   }
#define io(v) cin>>v
#define foreach(v,i) for(int i=0;i<v.size();i++)
#define INF 10000000
#define toStr(S) #S

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}