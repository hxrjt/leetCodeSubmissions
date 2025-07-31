// Last updated: 7/31/2025, 10:16:36 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0,e=numbers.size()-1;
        int sum=numbers[s]+numbers[e];
        vector<int> ans;
        while(s<e){
            if(sum==target){
                ans.push_back(s+1);
                ans.push_back(e+1);
                break;
            }
            else if(sum<target){
                s=s+1;
            }
            else{
                e=e-1;
            }
            sum=numbers[s]+numbers[e];
        }
        return ans;
    }
};