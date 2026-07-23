class Solution {
public:
    int fo(vector<int>& nums, int target){
        int ans = -1;
        int left = 0;
        int right = nums.size()-1;
    while(left<=right){
       int mid=left+(right-left)/2;
            if(target==nums[mid]){
            ans = mid;
            right=mid-1;
            }
            else if(target<nums[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
    }
    return ans;
    }
    int lo(vector<int>& nums, int target){
        int ans =-1;
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target==nums[mid]){
            ans = mid;
            left=mid+1;
            }
            else if(target<nums[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {fo(nums,target),lo(nums,target)};
    }
};