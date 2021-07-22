#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> a, int key, bool find_first_occurence)
{
    int b = 0, l = a.size(), e = l - 1;
    while (b <= e)
    {
        int mid = (b + e) / 2;
        if (a[mid] == key)
        {
            if (find_first_occurence)
            {
                if (mid == 0 || a[mid - 1] < a[mid])
                    return mid;
                else
                    e = mid - 1;
            }
            else
            {
                if (mid == l - 1 || a[mid + 1] > a[mid])
                    return mid;
                else
                    b = mid + 1;
            }
        }
        else if (a[mid] > key)
            e = mid - 1;
        else
            b = mid + 1;
    }
    return -1;
}
