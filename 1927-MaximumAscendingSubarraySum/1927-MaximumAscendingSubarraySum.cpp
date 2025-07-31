// Last updated: 7/31/2025, 10:15:09 PM
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum=0;
        int curSum;
        for(int i=0;i<nums.size();i++){
            curSum=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[j-1]){
                    curSum+=nums[j];
                }
                else{
                    break;
                }
            }
            maxSum=max(curSum,maxSum);
        }
        return maxSum;
    }
};