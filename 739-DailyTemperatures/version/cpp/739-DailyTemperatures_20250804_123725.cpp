// Last updated: 8/4/2025, 12:37:25 PM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<pair<int,int>> s;
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!s.empty() && temperatures[i]>=s.top().first){
                s.pop();
            }
            if(!s.empty()){
                ans[i]=s.top().second-i;
            }
            s.push({temperatures[i],i});
        }
        return ans;
    }
};