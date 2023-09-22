#include <bits/stdc++.h>

vector<int> rotateArray(vector<int> arr, int k)
{
    vector<int> temp;
    for (auto it = arr.begin(); it != arr.begin() + k; it++)
    {
        temp.push_back(*it);
    }
    for (int i = 0; i < arr.size() - k; i++)
    {
        arr[i] = arr[k + i];
    }
    for (int i = arr.size() - k; i < arr.size(); i++)
    {
        arr[i] = temp[i - arr.size() + k];
    }
    return arr;
}