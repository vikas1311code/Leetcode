class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()<4) return nums[0];
        sort(nums.begin(),nums.end());
        int res;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                i+=2;
            }
            else{
                res=nums[i];
            }
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            res=nums[nums.size()-1];
        }
        return res;
    }
};