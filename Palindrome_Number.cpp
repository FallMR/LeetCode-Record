class Solution {
public:
    bool isPalindrome(int x)
    {
        if (x == 0) return true;
        if (x < 0 || x % 10 == 0) return false;
        int halfRe = 0;
        while (x > halfRe)
        {
            halfRe = halfRe * 10 + x % 10;
            x /= 10;
        }
        return (x == halfRe || x == halfRe / 10);
    }
};
