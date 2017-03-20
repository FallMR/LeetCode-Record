class Solution {
public:
    int myAtoi(string str)
    {
        long result = 0;
        int sign = 1, i = 0;
        while (i < str.length())
        {
            i = str.find_first_not_of(' ');
            if (str[i] == '-' || str[i] == '+')
            {
                sign = str[i++] == '-' ? -1 : 1;
            }
            while (str[i] >= '0' && str[i] <= '9')
            {
                result = result * 10 + str[i++] - '0';
                if (result * sign > INT_MAX) return INT_MAX;
                if (result * sign < INT_MIN) return INT_MIN;
            }
            return result * sign;
        }
        return 0;
    }
};
