// Last updated: 7/25/2025, 1:49:24 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> ref;
        for(int i=0;i<=n;i++){
            ref.push_back(i);
        }
        int s=0;
        for(int i=0;i<n;i++){
            int ans=nums[i]^ref[i];
            if(ans){
                break;
            }
            s++;
        }
        return ref[s];
    }
};