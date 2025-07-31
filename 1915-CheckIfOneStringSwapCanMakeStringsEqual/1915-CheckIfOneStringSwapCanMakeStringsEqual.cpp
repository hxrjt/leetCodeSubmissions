// Last updated: 7/31/2025, 10:15:12 PM
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int count=0;
        int l=-1;
        int r=-1;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                if(count==0){
                    l=i;
                    count++;
                }
                else if(count==1){
                    r=i;
                    count++;
                }
            }
        }
        if(count==1){
            return false;
        }
        else if(count==2){
            swap(s2[l],s2[r]);
        }
        if(s1==s2){
            return true;
        }
        return false;
    }
};