// Last updated: 8/25/2025, 3:14:06 AM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int winProd=1;
        int count=0;
        for(int j=0;j<nums.size();j++){
            winProd*=nums[j];
            while(winProd>=k && i<nums.size()){
                winProd/=nums[i];
                i++;
            }
            count+=(j-i)+1;
        }
        return (count<=0 || count==nums.size())?0:count;
    }
};