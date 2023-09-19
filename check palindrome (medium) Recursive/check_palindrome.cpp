#include <bits/stdc++.h>
bool fun(int i, string &s)
{
    if (i >= (s.size()) / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
        return false;
    return fun(i + 1, s);
}

bool isPalindrome(string &str)
{
    return fun(0, str);
}