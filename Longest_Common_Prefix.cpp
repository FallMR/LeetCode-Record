class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        if (strs.empty()) return "";
        int rows = strs.size();
        int pos = 0;
        while (true)
        {
            int flag = false;
            char judge = strs[0][pos];
            for (int i = 0; i < rows; i++)
            {
                if (pos >= strs[i].length())
                {
                    flag = true;
                    break;
                }
                if (strs[i][pos] != judge)
                {
                    return strs[i].substr(0, pos);
                }
            }
            if (flag) return strs[0].substr(0, pos);
            pos++;
        }
        return "";
    }
};
