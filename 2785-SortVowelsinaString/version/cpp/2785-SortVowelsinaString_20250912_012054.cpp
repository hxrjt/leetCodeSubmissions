// Last updated: 9/12/2025, 1:20:54 AM
class Solution {
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            return true;
        }
        return false;
    }
public:
    string sortVowels(string s) {
        vector<char> vow;
        int i=0;
        while(i<s.size()){
            if(isVowel(s[i])){
                vow.push_back(s[i]);
            }
            i++;
        }
        sort(vow.begin(),vow.end());
        string t="";
        i=0;
        int j=0;
        while(i<s.size()){
            if(isVowel(s[i])){
                t+=vow[j++];
            }
            else{
                t+=s[i];
            }
            i++;
        }
        return t;
    }
};