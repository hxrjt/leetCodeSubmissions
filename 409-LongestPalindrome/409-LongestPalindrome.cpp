// Last updated: 7/31/2025, 10:15:54 PM
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        int ans=0;
        for(char c:s){
            m[c]++;
        }
        bool odd=false;
        for(auto &i:m){
            if(!(i.second%2)){
                ans+=i.second;
            }
            else{
                ans+=i.second-1;
                odd=true;
            }
        }
        return odd?ans+1:ans;

    }
};