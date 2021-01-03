#include <bits/stdc++.h>

using namespace std;



int main()
{
   int t;
   cin>>t;

   vector<int> v;

   while(t--)
   {
       int n,k;
       cin>>n>>k;

       for(int i=1; i<n;i++)
       {
           for(int j=i+1;j<=n;j++)
           {
               if((i&j)<k)
               v.push_back(i&j);
           }
       }

       sort(v.begin(),v.end());

       cout<<v[v.size()-1]<<endl;
       v.clear();
   }

    return 0;
}

