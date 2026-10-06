class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int>ans(2);
        unordered_map<int,int>um;

        for(int i = 0;i< size;i++){
            if (um.find(target - nums[i]) != um.end()){
                ans = {um[target - nums[i]],i};
                return ans;
            }
            um[nums[i]] = i;
        }
        return ans;
        
    }
};
