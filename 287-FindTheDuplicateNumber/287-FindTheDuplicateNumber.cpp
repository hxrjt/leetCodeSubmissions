// Last updated: 7/31/2025, 10:16:06 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        while(i<nums.size()-1){
            int j=i+1;
            if(nums[i]==nums[j]){
                return nums[i];
            }
            i++;
        }
        return -1;
    }
};