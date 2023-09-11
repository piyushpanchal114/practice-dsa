int calcGCD(int n, int m)
{
    int large = n;
    if (n < m)
    {
        large = m;
    }
    for (int i = large; i >= 0; i--)
    {
        if (n % i == 0 && m % i == 0)
        {
            return i;
        }
    }
    return 1;
}