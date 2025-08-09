// Last updated: 8/9/2025, 1:05:31 PM
class Solution {
public:
    long long hours(vector<int> &piles,int mid){
        long long ans=0;
        for(int i=0;i<piles.size();i++){
            ans+=piles[i]/mid;
            if(piles[i]%mid!=0){
                ans++;
            }
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1,j=*max_element(piles.begin(),piles.end());
        int mid=i+(j-i)/2;
        int ans=INT_MIN;
        while(i<=j){
            if(hours(piles,mid)<=h){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
            mid=i+(j-i)/2;
        }
        return ans;
    }
};