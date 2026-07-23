class Solution {
public:
    int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int left = 2;
        int right = x/2;
        while(left<=right){
            int mid = left+(right-left)/2;
            long long sqr = (long long)mid*mid;
            if(x==sqr){
                return mid;
            }
            if(x<sqr){
                right= mid - 1;
            }
            if(x>sqr){
                left= mid + 1;
            }
        }
            return right;   
    }
};