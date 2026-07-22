class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int left =0;
        int i;
        int curr=nums[0];
        for(i=1;i<nums.size();i++){
            if(nums[i]==curr&&count<2){
                count++;
                left++;
                nums[left]=nums[i];
            }
        if(nums[i]!=curr){
            count=1;
            left++;
            nums[left]=nums[i];
            curr=nums[i];
        }
        }
        return left+1;
    }
};