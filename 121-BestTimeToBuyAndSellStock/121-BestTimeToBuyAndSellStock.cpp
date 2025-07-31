// Last updated: 7/31/2025, 10:16:47 PM
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