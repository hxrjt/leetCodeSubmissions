// Last updated: 7/31/2025, 10:16:25 PM
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