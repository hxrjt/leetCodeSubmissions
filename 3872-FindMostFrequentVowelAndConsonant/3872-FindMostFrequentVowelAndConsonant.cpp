// Last updated: 9/19/2025, 12:41:14 AM
class Solution {
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> vow;
        unordered_map<char,int> cons;
        for(char c:s){
            if(isVowel(c)){
                vow[c]++;
            }
            else{
                cons[c]++;
            }
        }
        int maxVow=0,maxCons=0;
        for(auto v:vow){
            maxVow=max(maxVow,v.second);
        }
        for(auto c:cons){
            maxCons=max(maxCons,c.second);
        }
        return maxVow+maxCons;
    }
};