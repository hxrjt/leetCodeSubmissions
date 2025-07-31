// Last updated: 7/31/2025, 10:15:05 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int pIndex=0;
        int nIndex=1;
        int i=0;
        while(i<nums.size()){
            if(nums[i]>0){
                ans[pIndex]=nums[i];
                pIndex+=2;
            }
            else{
                ans[nIndex]=nums[i];
                nIndex+=2;
            }
            i++;
        }
        return ans;
    }
};