// Last updated: 9/11/2025, 11:52:40 PM
class Solution {
public:
    string sortVowels(string s) {
        map<char,int> mp;
        int i=0;
        while(i<s.size()){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                mp[s[i]]++;
            }
            i++;
        }
        i=0;
        string t;
        while(i<s.size()){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                auto firstEle=mp.begin();
                t+=firstEle->first;
                mp[firstEle->first]--;
                if(mp[firstEle->first]==0){
                    mp.erase(firstEle->first);
                }
            }
            else{
                t+=s[i];
            }
            i++;
        }
        return t;
    }
};