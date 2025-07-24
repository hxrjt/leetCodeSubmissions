// Last updated: 7/25/2025, 1:49:50 AM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            maxProfit=max(maxProfit,prices[i]-min);
        }
        if(maxProfit<0){
            return 0;
        }
        return maxProfit;
    }
};