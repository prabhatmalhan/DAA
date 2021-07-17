#include <bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> a, int b, int e, int k)
{
    int no_of_comparison = 0;
    for (int i = b; i < e; ++i)
    {
        ++no_of_comparison;
        if (a[i] == k)
        {
            cout << "Present " << no_of_comparison << endl;
            return 1;
        }
    }
    cout << "Not Present " << no_of_comparison << endl;
    return 0;
}