class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int count=0;
        int i = len - 1;
        while(s[i]==' '){
              i--;
        }
        for ( ; i>=0; i--){
            if(s[i] == ' '){
                break;
            }
            else{
                count+=1;
            } 
        }
      
        return count;
    }
};