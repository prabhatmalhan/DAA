#include <bits/stdc++.h>

using namespace std;

int linearSearch(int a[], int l, int k)
{
    int no_of_comparison = 0;
    for (int i = 0; i < l; ++i)
    {
        ++no_of_comparison;
        if (a[i] == k)
        {
            cout << "Present " << no_of_comparison;
            return 1;
        }
    }
    cout << "Not Present " << no_of_comparison;
    return 0;
}