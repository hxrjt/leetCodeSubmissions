// Last updated: 8/23/2025, 2:25:31 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int currSum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>currSum+nums[i]){
                currSum=nums[i];
            }
            else{
                currSum+=nums[i];
            }
            maxSum=max(maxSum,currSum);
        }
        return maxSum;
    }
};