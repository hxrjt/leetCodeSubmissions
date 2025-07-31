// Last updated: 7/31/2025, 10:17:25 PM
class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x){
            int temp;
            temp=x%10;
            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                return 0;
            }
            ans=(ans*10)+temp;
            x=x/10;
        }
        return ans;
    }
};