class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int i = 0, j = 0;
        int max = 0;
        bool detect[128];
        while (i < len)
        {
            if (!detect[s[i]])
            {
                detect[s[i]] = 1;
                i++;
            }
            else
            {
                max = max < (i - j) ? (i - j) : max;
                while (s[j] != s[i])
                {
                    detect[s[j]] = false;
                    j++;
                }
                i++; j++;
            }
        }
        max = max < (len - j) ? (len - j) : max;
        return max;
    }
};
