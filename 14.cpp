class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int minm=strs[0].length();
        for(int i=0;i<n;i++) {
            int x=strs[i].size();
            minm = min(x, minm);
        }
        
        string com = "";
        for(int i=0; i<minm; ++i) {
            char x = strs[0][i];
            bool ok = true;
            for(int j=0; j<n; ++j) {
                if (strs[j][i] != x) {
                    ok = false;
                }
            }
            if(ok == false) break;
            com += x;
        }
        return com;
    }
};