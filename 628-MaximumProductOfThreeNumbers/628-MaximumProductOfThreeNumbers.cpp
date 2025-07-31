// Last updated: 7/31/2025, 10:15:40 PM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int pMax=nums[n];
        int p2Max=nums[n-1];
        int p3Max=nums[n-2];
        int nMax=nums[0];
        int n2Max=nums[1];

        int pMul=pMax*p2Max*p3Max;
        int nMul=nMax*n2Max*pMax;
        return pMul>nMul?pMul:nMul;
    }
};