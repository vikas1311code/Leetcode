class Solution {
public:
    string reverseWords(string s) {
          vector<string> words;
       int left =0;
       int right = s.size();
       while(left<right){
        while(left<right&&s[left]==' '){
            left++;
        }
        string word="";
        while(left<right&&s[left]!=' '){
          word+=s[left];
          left++;
        }
        reverse(word.begin(),word.end());
        if(!word.empty()){
            words.push_back(word);
        }
        word = "";
       }
       string ans="";
       for(int i = 0; i<=words.size()-1; i++){
        ans+=words[i];
        if(i!=words.size()-1){
         ans+=" ";
        }
       }
     return ans;
    }
};