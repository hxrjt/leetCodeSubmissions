// Last updated: 9/9/2025, 3:21:55 AM
class Solution {
public:
    bool check(int num){
        while(num){
            if(!(num%10)){
                return false;
            }
            num=num/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            if(check(i) && check(n-i)){
                return {i,n-i};
            }
        }
        return {1,1};
    }
};