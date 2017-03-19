class Solution {
public:
    string convert(string s, int numRows)
    {
        if(numRows == 1) return s;
        
        int len = s.length();
        string res[numRows];
        int i = 0, hypo = numRows - 2;
        
        while(i < len)
        {
            for(int j = 0; i < len && j < numRows; ++j) res[j] += s[i++];
            for(int j = hypo; i < len && j > 0; --j) res[j] += s[i++];
        }
        
        string str = "";
        for(i = 0; i < numRows; ++i)
            str += res[i];
        return str;
    }
};
