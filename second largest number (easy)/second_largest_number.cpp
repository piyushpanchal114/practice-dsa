#include <bits/stdc++.h>

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    sort(a.begin(), a.end());
    vector<int> b;
    b.push_back(a[n - 2]);
    b.push_back(a[1]);
    return b;
}
