class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> hashTable;
        for(int i = 0; i < nums.size(); i++){
            if(!hashTable.count(nums[i]))
            {
                hashTable.insert(pair<int, int>(nums[i], i));
            }
            if(hashTable.count(target - nums[i])){
                int n = hashTable[target - nums[i]];
                if(n < i)
                {
                    result.push_back(n);
                    result.push_back(i);
                    return result;
                }
            }
        }
        return result;
    }
};
