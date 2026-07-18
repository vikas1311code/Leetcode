class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int nums[101];
        int ans = INT_MIN;
        for(int i=0;i<gain.size();i++){
            
            sum+=gain[i];
            nums[i]=sum;
            if(ans<nums[i]){
              ans=nums[i];
            }
        }
        if(ans<0) return 0;
        return ans;
    }
};