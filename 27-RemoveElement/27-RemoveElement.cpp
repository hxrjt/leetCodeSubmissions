// Last updated: 7/31/2025, 10:17:12 PM
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