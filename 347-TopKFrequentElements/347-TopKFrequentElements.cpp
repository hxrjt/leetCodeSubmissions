// Last updated: 7/31/2025, 10:16:02 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i:nums){
            map[i]++;
        }
        vector<pair<int,int>> temp;
        for(auto i:map){
            temp.push_back(make_pair(i.second,i.first));
        }
        sort(temp.rbegin(),temp.rend());
        for(int i=0;i<k;i++){
            ans.push_back(temp[i].second);
        }

        return ans;
    }
};