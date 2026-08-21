class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> a(26,0);
        for(char c : s){
            a[c-'a']++;
        }
        int i =0;
        for(char c : s){
            if(a[c-'a']==1){
                return i;
            }
            i++;
        }
     return -1;
    }
};