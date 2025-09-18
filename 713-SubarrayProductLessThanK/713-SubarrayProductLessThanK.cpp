// Last updated: 9/19/2025, 12:42:02 AM
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0;
        int winProd=1;
        int count=0;
        if(k<=1){
            return 0;
        }
        for(int j=0;j<nums.size();j++){
            winProd*=nums[j];
            while(winProd>=k && i<nums.size()){
                winProd/=nums[i];
                i++;
            }
            count+=(j-i)+1;
        }
        return count;
    }
};