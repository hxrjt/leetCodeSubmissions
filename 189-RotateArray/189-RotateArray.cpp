// Last updated: 7/25/2025, 1:49:36 AM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        
        reverse(nums.begin(),nums.end());
    }
};