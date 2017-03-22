class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.empty()) return vector<string>();
        vector<string> map = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        ans.push_back("");
        for (int i = 0; i < digits.size(); i++)
        {
            int n = digits[i] - '0';
            string refer = map[n];
            vector<string> tmp;
            for (int j = 0; j < refer.size(); j++)
            {
                for (int k = 0; k < ans.size(); k++)
                {
                    tmp.push_back(ans[k] + refer[j]);
                }
            }
            ans = tmp;
        }
        return ans;
    }
};
