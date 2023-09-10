class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        int temp = x;
        long rev = 0;
        while (x != 0)
        {
            int rem = x % 10;
            x /= 10;
            // if( rev * 10 > INT_MAX) return false;
            rev = rev * 10 + rem;
        }
        if (rev == temp)
        {
            return true;
        }
        return false;
    }
};