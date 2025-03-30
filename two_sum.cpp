class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int size = nums.size();
            vector<pair<int,int>> indexedNUnms;
            for (int i = 0; i < size; i++)
            {
                indexedNUnms.push_back({nums.at(i),i});
            }
            sort(indexedNUnms.begin(),indexedNUnms.end());
            int start = 0,end = nums.size()-1;
            while (start<end)
            {
                int sum = indexedNUnms[start].first + indexedNUnms[end].first;
                if (target == sum)
                {
                    return {indexedNUnms[start].second,indexedNUnms[end].second};
                }
                else if (sum>target)
                {
                    end--;
                }
                else if (sum<target)
                {
                    start++;
                } 
            }
            return{};
        }
    };