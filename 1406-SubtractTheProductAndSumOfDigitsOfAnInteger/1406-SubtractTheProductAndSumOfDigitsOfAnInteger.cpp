// Last updated: 7/25/2025, 1:49:03 AM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp,add=0,mult=1;
        while(n){
            temp=n%10;
            add=add+temp;
            mult=mult*temp;
            n=n/10;
        }
        int dif=mult-add;
        return dif;
    }
};