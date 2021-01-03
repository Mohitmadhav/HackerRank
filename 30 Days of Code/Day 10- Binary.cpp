#include <bits/stdc++.h>

using namespace std;



int main()
{

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int count=0,result=0;
    while(n>0)
    {
    if(n%2==0)
    count=0;
    else
    {
        count++;
        result=max(result,count);

    }
    n=n/2;

    }

    cout<<result;

    return 0;
}





