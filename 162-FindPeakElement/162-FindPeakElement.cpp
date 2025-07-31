// Last updated: 7/31/2025, 10:16:38 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid]<nums[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return e;
    }
};