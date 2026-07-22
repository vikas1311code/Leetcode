class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um ;
        for(int i = 0; i < nums.size(); i++){
            if(um.find(nums[i]) != um.end()) um[nums[i]] = um[nums[i]]+1;
            else um[nums[i]] = 1;
        }
        int max=-1;
        int count=0;
        for(unordered_map<int,int>::iterator it = um.begin(); it != um.end(); it++){
            if(it->second > count){
                max = it->first;
                count = it->second;
            }
        }
        return max;
    }
};