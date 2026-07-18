class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i = 0;
        for(int j=0;j<nums.size()-1;j++){
            if(nums[j]==nums[j+1]){
                nums[j] *=2;
                nums[j+1]=0;
            }
        }
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return nums;
    }
};