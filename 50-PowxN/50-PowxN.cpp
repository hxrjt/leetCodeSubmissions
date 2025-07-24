// Last updated: 7/25/2025, 1:50:03 AM
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1;
        } if (n == 1) {
            return x;
        } if (n == -1) {
            return 1/ x;
        }
        if (n % 2 == 0) {
            double ans = myPow(x, n / 2);
            return ans*ans;
        } else {
            if(n<0){
                double ans =myPow(x, n / 2);
                return 1/x*ans*ans;    
            }
            else{
                double ans = myPow(x, n / 2);
                return ans*ans*x;
            }
        }
    }
};