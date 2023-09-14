long long sumFirstN(long long n)
{
    if (n == 1)
        return 1;
    else
    {
        return sumFirstN(n - 1) + n;
    }
}