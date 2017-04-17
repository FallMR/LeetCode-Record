class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len = s.length();
    
        int cur = 1;
        char ch;
        st.push(s[0]);
        while (cur < len) {
            switch (s[cur]) {
                case '{':
                case '[':
                case '(':
                    st.push(s[cur]);
                    break;
                case '}':
                    if (st.empty()) return false;
                    ch = st.top();
                    st.pop();
                    if (ch != '{') return false;
                    break;
                case ']':
                    if (st.empty()) return false;
                    ch = st.top();
                    st.pop();
                    if (ch != '[') return false;
                    break;
                case ')':
                    if (st.empty()) return false;
                    ch = st.top();
                    st.pop();
                    if (ch != '(') return false;
                    break;
            }
            cur++;
        }
        if (!st.empty()) return false;
        else return true;
    }
};