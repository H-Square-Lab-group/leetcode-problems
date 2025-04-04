class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int size = nums.size();
            unordered_map<int,int> num ;
            for (int i = 0; i < size; i++)
            {
                int complement = target-nums.at(i);
                if (num.find(complement)!=num.end())
                {
                    return{num[complement],i};
                }
                num[nums[i]] = i;   
            }
            return{};
        }
    };
