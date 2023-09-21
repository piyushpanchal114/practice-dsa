#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n)
{
    vector<int> temp = arr;
    int i = 0;
    for (auto it = arr.begin() + 1; it != arr.end(); it++)
    {
        temp[i] = *it;
        i++;
    }
    *(temp.end() - 1) = arr[0];
    return temp;
}
