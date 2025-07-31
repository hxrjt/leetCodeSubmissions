// Last updated: 7/31/2025, 10:15:57 PM
class Solution {
    private:
    long long int sqrtnum(int num){
        long long int s=0,e=num;
        long long int mid=s+(e-s)/2; 
        while(s<=e){
            long long int ans=mid*mid;
            if(ans==num){
                return mid;
            }
            else if(ans<num){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return mid;
    }
public:
    bool isPerfectSquare(int num) {
        long long int ans=sqrtnum(num);
        if((ans*ans)==num){
            return true;
        }
        return false;
    }
};