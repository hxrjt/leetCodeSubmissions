// Last updated: 8/11/2025, 11:36:06 PM
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string> st;
        unordered_map<string,int> mp;
        string temp="";
        for(int i=0;i<10 && i<s.size();i++){
            temp+=s[i];
        }
        mp[temp]++;
        for(int i=10; i<s.size();i++){
            temp+=s[i];
            temp.erase(temp.begin());
            if(mp.find(temp)!=mp.end()){
                st.insert(temp);
            }
            else{
                mp[temp]++;
            }
        }
        vector<string> ans(st.begin(),st.end());
        return ans;
    }
};