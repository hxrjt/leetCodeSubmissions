// Last updated: 8/16/2025, 1:56:56 PM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=(nums.size()/2)-1,j=nums.size()/2;
        int maxSum=0;
        int currSum=0;
        while(i>=0 && j<nums.size()){
            currSum=nums[i]+nums[j];
            maxSum=max(maxSum,currSum);
            i--,j++;
        }
        return maxSum;
    }
};