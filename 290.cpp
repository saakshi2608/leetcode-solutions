class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=pattern.size();
        int n1=s.size();
        map<char, string>m;
        map<string, char>ms;
        string word;
        vector<string>words;
        for(int i=0;i<n1;i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else{
                words.push_back(word);
                word="";
            }
        }
        words.push_back(word);
        int v=words.size();
        if(v!=n){
            return false;
        }
        for(int i=0;i<n;i++){
            if(m.find(pattern[i])==m.end()){
                if(ms.find(words[i])==ms.end()){
                    m[pattern[i]]=words[i];
                    ms[words[i]]=pattern[i];
                }
                else{
                    return false;
                }
            }
            else{
                if(m[pattern[i]]!=words[i]){
                    return false;
                }
            }
        }
        return true;
    }
};