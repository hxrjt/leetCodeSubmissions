// Last updated: 7/31/2025, 10:16:11 PM
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