#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

        int result=-100;

        for(int j=0;j<6;j++)
        {
            for(int k=0;k<6;k++)
            {
                if((k+2<6)&&(j+2<6))
                {
                    int s=(arr[j][k]+arr[j][k+1]+arr[j][k+2])+(arr[j+1][k+1])
                +(arr[j+2][k+1]+arr[j+2][k+2]+arr[j+2][k]);

                 result=max(result,s);
                }
            }


        }

        cout<<result;
        return 0;
}
