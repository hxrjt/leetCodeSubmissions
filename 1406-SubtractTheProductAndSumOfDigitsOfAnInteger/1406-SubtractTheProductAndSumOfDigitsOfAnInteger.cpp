// Last updated: 7/31/2025, 10:15:24 PM
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