// Last updated: 7/25/2025, 1:48:53 AM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0){
            return n;
        }
        else{
            return n*2;
        }
    }
};