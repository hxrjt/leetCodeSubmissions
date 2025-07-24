// Last updated: 7/25/2025, 1:50:23 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength=0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int> map;
            int currentLength=0;
            for(int j=i;j<s.size();j++){
                if(map[s[j]]){
                    break;
                }
                map[s[j]]++;
                currentLength++;
            }
            maxLength=max(currentLength,maxLength);
        }
        return maxLength;
    }
};