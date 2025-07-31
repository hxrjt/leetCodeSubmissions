// Last updated: 8/1/2025, 12:14:17 AM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> mp;
        for(string s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s);
        }
        for(auto &i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};