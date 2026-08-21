class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int k = x;
        long long m=0;
        while(x>0){
        m = m*10+x%10;
        x/=10;
        }
        return m==k;
    }
};