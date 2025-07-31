// Last updated: 7/31/2025, 10:15:03 PM
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