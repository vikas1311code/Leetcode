class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j =0;
        int i;
        long long maxi =0;
        long long total=0;
        while(j<nums.size()){
            i=j;
           while(i<nums.size()&&nums[i]!=0){
            total+=1;
            maxi=max(maxi,total);
            i++;
           }
           if(i<nums.size()&&nums[i]==0){
            total =0;
           }
           j=i+1;
        }
        return maxi;
    }
};