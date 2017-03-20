class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> transTable = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                                      {'C', 100}, {'D', 500}, {'M', 1000} };
        int sum = transTable[s.back()];
        for (int i = s.length() - 2; i >= 0; i--)
        {
            if (transTable[s[i]] < transTable[s[i + 1]])
            {
                sum -= transTable[s[i]];
            }
            else
            {
                sum += transTable[s[i]];
            }
        }
        return sum;
    }
};
