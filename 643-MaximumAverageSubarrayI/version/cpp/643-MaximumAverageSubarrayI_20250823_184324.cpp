// Last updated: 8/23/2025, 6:43:24 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double size=k;
        int currSum=0;
        double currAvg=0;
        double maxAvg=INT_MIN;
        for(int i=0;i<k;i++){
            currSum+=nums[i];
            currAvg=currSum/size;
        }
        maxAvg=max(maxAvg,currAvg);
        for(int i=k;i<nums.size();i++){
            currSum=currSum+nums[i]-nums[i-k];
            currAvg=currSum/size;
            maxAvg=max(maxAvg,currAvg);
        }
        return maxAvg;
    }
};