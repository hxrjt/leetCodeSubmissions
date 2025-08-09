// Last updated: 8/9/2025, 11:06:41 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else{
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            nums3.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            nums3.push_back(nums2[j]);
            j++;
        }
       i=0,j=nums3.size()-1;
       while(i<j){
        i++;
        j--;
       }
       double ans=(nums3[i]+nums3[j])/2.0;
       return ans;

    }
};