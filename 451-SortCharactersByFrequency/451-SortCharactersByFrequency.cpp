// Last updated: 7/31/2025, 10:15:53 PM
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        string ans="";
        for(auto i:s){
            m[i]++;
        }
        vector<pair<int,char>> temp;
        for(auto i:m){
            temp.push_back(make_pair(i.second,i.first));
        }
        sort(temp.rbegin(),temp.rend());
    
        for(int i=0;i<temp.size();i++){
            int cnt=temp[i].first;
            for(int k=cnt;k;k--){
                ans.push_back(temp[i].second);
            }
        }
        return ans;
    }
};