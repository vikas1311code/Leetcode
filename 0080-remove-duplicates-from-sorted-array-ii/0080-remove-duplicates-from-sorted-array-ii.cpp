class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int cnt =1;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(prev==nums[i])
            {
                cnt++;
                if(cnt>2)
                {
                    nums.erase(nums.begin()+i);
                    cnt--;
                    i=i-1;

                }
            }
            else
            {
                prev=nums[i];
                cnt=1;
            }

        }
        
        return nums.size();
    }
};