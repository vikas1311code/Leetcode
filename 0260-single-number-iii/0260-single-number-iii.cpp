class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                i++;
            }
            else{
                res.push_back(nums[i]);
            }
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            res.push_back(nums[nums.size()-1]);
        }
        return res;
    }
};