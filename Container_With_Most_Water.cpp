class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int left = 0, right = height.size() - 1;
        int h = min(height[left], height[right]);
        int ans = h * right;
        while (left < right)
        {
            while (height[left] <= h) left++;
            while (height[right] <= h) right--;
            h = min(height[left], height[right]);
            ans = max(ans, h * (right - left));
        }
        return ans;
    }
};
