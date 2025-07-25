// Last updated: 7/25/2025, 1:49:25 AM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;

        unordered_map<char,int> map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(map.find(t[i])==map.end() || map[t[i]]==0){
                return false;
            }
            map[t[i]]--;
        }
        
        return true;
    }
};