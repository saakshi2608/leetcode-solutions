class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string v;
        for(int i=0;i<n;i++){
            if(isupper(s[i])){
                s[i]=tolower(s[i]);
            }
            if(isalpha(s[i])){
                v+=s[i];
            }
            if(isdigit(s[i])){
                v+=s[i];
            }
        }
        int n1=v.size();
        string news;
        for(int i=n1-1;i>=0;i--){
            news+=v[i];
        }
        cout<<v;
        if (news==v){
            return true;
        }
        else{
            return false;
        }
        
    }
};