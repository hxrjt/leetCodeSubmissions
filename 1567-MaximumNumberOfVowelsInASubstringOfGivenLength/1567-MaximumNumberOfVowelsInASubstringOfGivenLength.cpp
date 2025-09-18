// Last updated: 9/19/2025, 12:41:35 AM
class Solution {
private:
bool isVowel(char s){
    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
        return true;
    }
    return false;
}
public:
    int maxVowels(string s, int k) {
        int maxVowel=INT_MIN;
        int currVowel=0;
        for(int i=0;i<k && i<s.size();i++){
            if(isVowel(s[i])){
                currVowel++;
            }
        }
        maxVowel=max(maxVowel,currVowel);
        
        for(int i=k;i<s.size();i++){
            if(isVowel(s[i]) && !isVowel(s[i-k])){
                currVowel++;
            }
            else if((isVowel(s[i]) && isVowel(s[i-k])) || (!isVowel(s[i]) && !isVowel(s[i-k]))){
                currVowel=currVowel;
            }
            else{
                currVowel--;
            }
            maxVowel=max(maxVowel,currVowel);
        }
        return maxVowel;

    }
};