// Last updated: 9/19/2025, 12:41:23 AM
class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;
        string temp="";
        int i=0,j=nums.size()-1;
        while(i<=j){
            if(i==j){
                temp=to_string(nums[i]);
            }
            else{
                temp=to_string(nums[i])+to_string(nums[j]);
            }
            long long tempNum=stoll(temp);
            ans=ans+tempNum;
            i++,j--;
            temp="";
        }
        return ans;
    }
};