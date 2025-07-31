// Last updated: 7/31/2025, 10:15:08 PM
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};