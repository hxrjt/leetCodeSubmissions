// Last updated: 7/31/2025, 10:15:59 PM
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> table;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            table[nums1[i]]++;
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