class Solution {
public:
    int secondHighest(string s) {
        int largest= -1;
        int second = -1;
        int n = s.size();
        for(int i =0;i<n;i++){
            if(isdigit(s[i])){
                int digit = s[i] - '0';
                if(largest<digit){
                    second = largest;
                    largest=digit;
                    
                }
                else if(digit>second&&digit!=largest){
                    second = digit;
                }
            }
        }
        return second;
    }
};