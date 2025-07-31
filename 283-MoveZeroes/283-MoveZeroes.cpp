// Last updated: 7/31/2025, 10:16:08 PM
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