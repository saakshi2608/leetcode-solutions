class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char>m, ms;
        /*
            s = "aab"
            t = "bdd"
            
            ms = {}
            ms = {a: b}
            m = 
        */
        
        int n=s.size();
        for (int i=0;i<n;i++){
            if (m.find(t[i]) == m.end()){
                if (ms.find(s[i]) != ms.end()) { 
                    return false;
                }
                m[t[i]]=s[i];
                ms[s[i]]=t[i];
            }
            else {
                if (m[t[i]] != s[i])
                    return false;
            }
        }
        return true;
    }
};