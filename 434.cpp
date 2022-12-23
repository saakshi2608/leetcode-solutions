class Solution {
public:
    int countSegments(string s) {
        int n=s.size();
        double count=0;
        if(n==0){
            return 0;
        }
        /*
            outerloop {
                innerloop {
                    // one word
                }
                count+=1;
            }
        */
        int i=0;
        while(i<n){
             if(s[i]==' '){
                 i++;
                continue;
            }
            while(i<n && s[i]!=' '){
                i++;
            }   
            count+=1;
        }
        return count;
    }
};