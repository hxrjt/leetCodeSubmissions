// Last updated: 8/25/2025, 3:16:48 AM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        if(k<=1) return 0;
        int n=nums.size();
        int product=1;
        int count=0;
        while(r<n){
            product*=nums[r];
            while(product>=k){
                product=product/nums[l];
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;
    }
};