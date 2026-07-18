class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        int i;
        for(i=1;i<=nums[0];i++){
            if(nums[0]%i==0&&nums[n-1]%i==0){
                ans = i;
            }
        }
        return ans;
    }
};