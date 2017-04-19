class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string toAppend = "";
        generate(result, toAppend, n, 0);
        return result;
    }
    
    void generate(vector<string> &result, string str, int n, int m) {
        if (n == 0 && m == 0) {
            result.push_back(str);
        } else {
            if (m > 0) generate(result, str + ')', n, m - 1);
            if (n > 0) generate(result, str + '(', n - 1, m + 1);
        }
    }
};