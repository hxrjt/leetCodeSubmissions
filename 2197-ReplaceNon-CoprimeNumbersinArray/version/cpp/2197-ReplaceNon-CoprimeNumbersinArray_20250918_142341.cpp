// Last updated: 9/18/2025, 2:23:41 PM
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int minEven=INT_MAX;
        int maxOdd=INT_MIN;
        for(auto p:mp){
            if(p.second%2==0 && p.second<minEven){
                minEven=p.second;
            }
            else if(p.second%2!=0 && p.second>=maxOdd){
                maxOdd=p.second;
            }
        }
        return maxOdd-minEven;
    }
};