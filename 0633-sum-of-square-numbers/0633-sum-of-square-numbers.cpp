class Solution {
public:
    bool judgeSquareSum(int c) {
        int ans =0;
        int left = 0;
        int right =sqrt(c);
        while(left<=right){
            long long k = 1LL*left*left+1LL*right*right;
            if(k==c) return true;
            else if(k<c){
                left++;
            }
            else{
                right--;
            }
            
        }
        return ans;
    }
};