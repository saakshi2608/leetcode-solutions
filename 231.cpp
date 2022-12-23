class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i;
       while(n>0){
            if(n==1){
            return true;
        }
           i=n%2;
           if(i==0){
               n=n/2;
               continue;
           }
           else{
               return false;
           }
       }
        return false;
    }
};