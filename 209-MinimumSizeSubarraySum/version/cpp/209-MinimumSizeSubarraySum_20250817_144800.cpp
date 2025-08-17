// Last updated: 8/17/2025, 2:48:00 PM
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen=INT_MAX;
        int sum=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];
            while(sum>=target){
                minLen=min(j-i+1,minLen);
                sum-=nums[i];
                i++;
            }
        }
        return (minLen==INT_MAX) ? 0 : minLen;
    }
};