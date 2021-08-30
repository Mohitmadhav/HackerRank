//Problem Statement: https://www.hackerrank.com/challenges/cpp-maps/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int queries;
    cin >> queries;
    map<string, int> mp;
    while (queries--)
    {
        int type;
        cin >> type;

        switch (type)
        {

        case 1:
        {
            string name;
            int marks;

            cin >> name >> marks;
            map<string, int>::iterator itr = mp.find(name);
            if (itr == mp.end())
                mp.insert(make_pair(name, marks));
            else
                itr->second += marks;
            break;
        }

        case 2:
        {
            string name;

            cin >> name;
            mp.erase(name);
            break;
        }

        case 3:
        {
            string name;

            cin >> name;
            map<string, int>::iterator itr = mp.find(name);
            (itr != mp.end()) ? cout << mp[name] << endl : cout << "0" << endl;
            break;
        }
        }
    }
    return 0;
}
