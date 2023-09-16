#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n)
{
    int x = 0;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        if (*it > x)
        {
            x = *it;
        }
    }
    return x;
}
