// Last updated: 8/10/2025, 2:11:30 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int l=0;
        int maxLen=0,currLen=0;
        for(int r=0;r<s.size();r++){
            if(mp.find(s[r])==mp.end()){
                mp[s[r]]++;
                currLen++;
            }
            else{
                mp.clear();
                r=l+1;
                l++;
                mp[s[l]]++;
                currLen=1;
            }
            maxLen=max(maxLen,currLen);
        }
        return maxLen;
    }
};