class Solution {
public:
    int firstDigit(int x){
        while(x>=10){
            x/=10;
        }
        return x;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int c=0;
        for(int i = 0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int first = firstDigit(nums[i]);
                int last = nums[j] % 10;

                if(__gcd(first, last) == 1){
                    c++;
                }
            }
        }
        return c;
    }
};