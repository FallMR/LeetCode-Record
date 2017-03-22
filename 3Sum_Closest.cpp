class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int len = nums.size();
        int sum = 0;
        
        sort(nums.begin(), nums.end());
    
        if (len <= 3)
        {
            return accumulate(nums.begin(), nums.end(), 0);
        }
    
        int ans = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < len - 2; i++)
        {
            int j = i + 1;
            int k = len - 1;
            while (j < k)
            {
                sum = nums[i] + nums[j] + nums[k];
                if (abs(target - ans) > abs(target - sum))
                {
                    ans = sum;
                    if (ans == target) return ans;
                }
                (sum > target) ? k-- : j++;
            }
        }
        return ans;
    }
};
