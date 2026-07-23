class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
     int n =nums.size();
     int bits=0;
     if(n<=2){return n;}
     while(n){
        bits++;
        n >>=1;
     }
     return pow(2,bits);
    }
};