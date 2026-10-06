class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        int size = nums.size();
        for(int i=0;i<size; i++){
            if(um.find(nums[i]) != um.end()){
                return true;
            }
            um[nums[i]]++;
        }
        return false;
    }
};