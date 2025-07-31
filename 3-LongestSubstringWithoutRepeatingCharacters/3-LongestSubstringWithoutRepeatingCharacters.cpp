// Last updated: 7/31/2025, 10:17:27 PM
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