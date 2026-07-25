class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int n = citations.size();
        if(n==1&&citations[0]!=0){
            return 1;
        }
        for(int i =0; i<n; i++){
            int prices = n-i;
            if(citations[i]>=prices){
                return prices;
            }
        }
        return 0;
    }
};