// Last updated: 7/25/2025, 1:50:13 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};