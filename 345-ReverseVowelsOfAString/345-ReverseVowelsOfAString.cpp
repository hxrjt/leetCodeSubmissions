// Last updated: 7/25/2025, 1:49:18 AM
class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels={'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
        int i=0,j=s.size()-1;
        while(i<j){
            while(i<j && vowels.find(s[i])==vowels.end()){
                i++;
            }
            while(i<j && vowels.find(s[j])==vowels.end()){
                j--;
            }
            swap(s[i],s[j]);
            i++;j--;
        }
        return s;
    }
};