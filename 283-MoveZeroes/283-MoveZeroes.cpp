// Last updated: 7/25/2025, 1:49:22 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size()){
            if(nums[i]){
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
    }
};