#include <bits/stdc++.h>

int print(int y, vector<int> &nums)
{
    if (y == 1)
    {
        nums.push_back(y);
    }
    else
    {
        nums.push_back(y);
        print(y - 1, nums);
    }
}

vector<int> printNos(int x)
{
    vector<int> nums;
    print(x, nums);
    return nums;
}