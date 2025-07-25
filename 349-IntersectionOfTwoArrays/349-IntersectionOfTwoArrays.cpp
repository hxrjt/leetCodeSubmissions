// Last updated: 7/25/2025, 1:49:17 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> table;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            if(table[nums1[i]]){
                continue;
            }
            else{
                table[nums1[i]]++;
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(table[nums2[i]]){
                ans.push_back(nums2[i]);
                table[nums2[i]]--;
            }
        }
        return ans;
    }
};