class Solution {
public:
    int romanToInt(string s) {
        vector<int> n(26,0);
        int d;
        for (char c: s){
            d = c-'A';
        if(c=='I'){
        n[d]=1;
        }
        if(c=='V'){
        n[d]=5;
        }
        if(c=='X'){
        n[d]=10;
        }
        if(c=='L'){
        n[d]=50;
        }
        if(c=='C'){
        n[d]=100;
        }
        if(c=='D'){
        n[d]=500;
        }
        if(c=='M'){
        n[d]=1000;
        }
        }
        int k  = s.size()-1;
        int i =k;
        int j = k-1;
        int total= n[s[i]-'A'];
        while(j>=0){
         if(n[s[j]-'A']<n[s[i]-'A']){
            total-=n[s[j]-'A'];
         }
         else{
            total+=n[s[j]-'A'];
            i=j;
         }
         j--;
        }
        return total;
    }
};