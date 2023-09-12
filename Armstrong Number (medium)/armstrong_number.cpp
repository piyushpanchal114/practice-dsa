#include <bits/stdc++.h>

bool checkArmstrong(int n)
{
    int temp = n;
    int count = 0;
    while (n != 0)
    {
        int rem = n % 10;
        n /= 10;
        count++;
    }
    n = temp;
    int res = 0;
    while (n != 0)
    {
        int rem = n % 10;
        n /= 10;
        res += pow(rem, count);
    }
    if (temp == res)
        return true;
    return false;
}
