class Solution {
public:
    int maxProduct(int n) {
        int maxi=0;
        int max2=0;
        int k=n;
        int m;
        int i =0 ;
        while(n){
            i++;
            if(n%10>maxi){
            maxi=max(maxi,n%10);
            m =i;
            }
        n /=10;
        }
        i =0;
         while(k){
            i++;
            if(k%10>max2&&m!=i)
        max2=max(max2,k%10);
        k /=10;
        }
        return maxi*max2;
    }
};