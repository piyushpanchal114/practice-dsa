#include <bits/stdc++.h>
using namespace std;

vector<int> printNos(int x)
{
    if (x == 1)
    {
        vector<int> nums;
        nums.push_back(x);
        return nums;
    }
    else
    {
        vector<int> nums = printNos(x - 1);
        nums.push_back(x);
        return nums;
    }
}