#include <bits/stdc++.h>

int removeDuplicates(vector<int> &arr, int n)
{
    int count = 0;
    int temp = 0;
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        if (temp != *it)
        {
            temp = *it;
            count++;
        }
    }
    return count;
}