#include <bits/stdc++.h>

vector<int> reverseArray(int n, vector<int> &nums)
{
    vector<int> arr;
    for (auto it = nums.rbegin(); it != nums.rend(); it++)
    {
        arr.push_back(*it);
    }
    return arr;
}
