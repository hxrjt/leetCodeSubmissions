// Last updated: 9/19/2025, 12:41:38 AM
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        int maxNum=-1;
        for(auto i:mp){
            if(i.first==i.second){
                maxNum=max(maxNum,i.first);
            }
        }
        return maxNum;
    }
};