class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> um ;
        int cur =0;
        int max;
        for(int num:nums){
            um[num]++;
            if(cur<=um[num]){
                cur = um[num];
                max = num;
            }
        }
        return max;
    }
};