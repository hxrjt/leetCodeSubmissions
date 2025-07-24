// Last updated: 7/25/2025, 1:49:20 AM
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