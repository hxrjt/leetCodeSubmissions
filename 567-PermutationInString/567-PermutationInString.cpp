// Last updated: 8/10/2025, 3:57:46 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        unordered_map<char,int> mp;
        unordered_map<char,int> windowMap;
        for(char ch:s1){
            mp[ch]++;
        }
    
        for(int i=0;i<s2.size() && i<k;i++){
            if(mp.find(s2[i])!=mp.end()){
                windowMap[s2[i]]++;
            }
            if(mp==windowMap) return true;
        }
        for(int i=k;i<s2.size();i++){
            if(mp.find(s2[i])!=mp.end()){
                windowMap[s2[i]]++;
            }
            if(mp.find(s2[i-k])!=mp.end()){
                windowMap[s2[i-k]]--;
            }
            if(mp==windowMap) return true;
        }
        return false;
    }
};