#include <bits/stdc++.h>

class Solution
{
public:
    int reverse(int x)
    {
        int temp = x;
        long res = 0;
        while (x != 0)
        {
            int reminder = x % 10;
            x /= 10;
            if (res * 10 > INT_MAX || res * 10 < INT_MIN)
                return 0;
            res = res * 10 + reminder;
        }
        return res;
    }
};