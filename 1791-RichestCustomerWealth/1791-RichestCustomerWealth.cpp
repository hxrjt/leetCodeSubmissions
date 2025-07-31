// Last updated: 7/31/2025, 10:15:18 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum=0;
        for(int i=0;i<accounts.size();i++){
            int currSum=0;
            for(int j=0;j<accounts[i].size();j++){
                currSum+=accounts[i][j];
            }
            maxSum=max(currSum,maxSum);
        }
        return maxSum;
    }
};