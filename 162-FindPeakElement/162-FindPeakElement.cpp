// Last updated: 7/25/2025, 1:49:41 AM
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