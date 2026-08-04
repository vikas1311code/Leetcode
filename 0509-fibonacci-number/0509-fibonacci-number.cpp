class Solution {
public:
    int fah(int n){
    if(n<=1) return n;
    return fah(n-1)+fah(n-2);
    }
    int fib(int n) {
        return fah(n);
    }
};