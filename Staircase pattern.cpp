#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    char a[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i+j<n-1)
        a[i][j]=' ';
        else
        a[i][j]='#';
    }

}

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
