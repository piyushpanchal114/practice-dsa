#include <bits/stdc++.h>

vector<string> printNTimes(int n)
{
    if (n == 1)
    {
        vector<string> list;
        list.push_back("Coding Ninjas");
        return list;
    }
    else
    {
        vector<string> list = printNTimes(n - 1);
        list.push_back("Coding Ninjas ");
        return list;
    }
}