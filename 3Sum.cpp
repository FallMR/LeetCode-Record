class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int> > res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            int toGet = -nums[i];
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right)
            {
                int sum = nums[left] + nums[right];
                if (sum < toGet) left++;
                if (sum > toGet) right--;
                if (sum == toGet)
                {
                    vector<int> triSet(3, 0);
                    triSet[0] = toGet;
                    triSet[1] = nums[left];
                    triSet[2] = nums[right];
                    res.push_back(triSet);

                    while (nums[left] == triSet[1] && left < right) left++;
                    while (nums[right] == triSet[2] && left < right) right--;
                }
            }

            while (nums[i + 1] == nums[i] && i + 1 < nums.size()) i++;
        }
        return res;
    }
};
