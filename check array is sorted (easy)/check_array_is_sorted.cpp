#include <bits/stdc++.h>

int isSorted(int n, vector<int> a)
{

    vector<int> b = a;
    sort(b.begin(), b.end());
    if (a == b)
    {
        return 1;
    }
    return 0;
}
