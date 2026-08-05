class Solution {
public:
    int countPrimes(int n) {
        int ans =0;
       if(n<=2){
        return 0;
       }
       vector<bool>prime(n,true);
       prime[0]=false;
       prime[1]=false;
       for(int i=2; i*i<n; i++){
        if(prime[i]==true){
            for(int j = i*i; j<n;j+=i){
                prime[j]=false;
            }
        }
       }
       for(int i =0; i<n;i++){
        if(prime[i]==true){
            ans+=1;
        }
       }
       return ans;
    }
};   