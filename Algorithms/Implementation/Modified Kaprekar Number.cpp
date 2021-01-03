#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
bool kaprekarNumbers(long n) {

  string str = to_string(n*n);
  long mid=str.size()/2;

  long sum= atoi(str.substr(0,mid).c_str())+atoi(str.substr(mid,str.size()).c_str());

  if(sum==n)
  return true;

  else
  return false;
}

int main()
{
    long p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int count=0;
    for (auto i=p;i<=q;i++)
    {
        if(kaprekarNumbers(i))
        {
            count++;
            cout<<i<<" ";
        }
    }

    if(!count)
    cout<<"INVALID RANGE";

    return 0;
}

