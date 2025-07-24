// Last updated: 7/25/2025, 1:50:11 AM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        return j;
    }
};