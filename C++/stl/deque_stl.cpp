//Problem Statement: https://www.hackerrank.com/challenges/deque-stl/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
//Gfg : https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    //Write your code here.

    deque<int> dq;

    int i = 0, j = 0;

    while (j < n)
    {

        //Elements before j which are less than arr[j] are useless
        while (!dq.empty() && dq.back() < arr[j])
        {
            dq.pop_back();
        }
        dq.push_back(arr[j]);

        //Window size =k
        if (j - i + 1 == k)
        {
            cout << dq.front() << " ";

            if (dq.front() == arr[i])
            {
                dq.pop_front();
            }

            i++;
            j++;
        }
        //Window size<k
        if (j - i + 1 < k)
            j++;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        cout << endl;
        t--;
    }
    return 0;
}

//Alternate Solutions: 
//https://programs.programmingoneonone.com/2021/02/hackerrank-deque-stl-solution-c-plus-plus.html
//https://www.thepoorcoder.com/hackerrank-deque-stl-solution/
