class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int max=0;
        int i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]>=0){
                max +=nums[i+1]-nums[i];
            }
        }
        return max;
    }
};