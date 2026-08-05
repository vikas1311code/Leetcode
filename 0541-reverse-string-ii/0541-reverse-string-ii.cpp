class Solution {
public:
    string reverseStr(string s, int k) {
        int left=0;
        int right=k;
        int i =0;
        while(i<s.size()){
            left = i;
            right = i+k-1;
            
            while(left<right){
                if(left>=s.size()-1){
                    return s;
                }
                if(right>s.size()-1){
                    right=s.size()-1;
                }
                swap(s[left],s[right]);
                left++;
                right--;
            }
            i+=2*k;
        }
        return s;
    }
};