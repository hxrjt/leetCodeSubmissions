// Last updated: 8/4/2025, 12:12:50 PM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<pair<int,int>> s;
        s.push({0,0});
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!s.empty() && temperatures[i]>=s.top().first){
                s.pop();
            }
            if(s.empty()){
                s.push({temperatures[i],i});
                ans[i]=s.top().second-i;
            }
            else{
                ans[i]=s.top().second-i;
                s.push({temperatures[i],i});
            }
        }
        return ans;
    }
};