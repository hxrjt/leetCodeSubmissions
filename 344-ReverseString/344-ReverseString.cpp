// Last updated: 7/31/2025, 10:16:05 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start=0,end=s.size()-1;
        while(start<end){
            swap(s[start],s[end]);
            start++,end--;
        }
    }
};