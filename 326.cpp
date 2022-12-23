class Solution {
public:
    bool isPowerOfThree(int n) {
        int r;
        if(n<=0){
            return false;
        }
        while(true){
         if(n==1){
            return true;
        }
            r=n%3;
            if(r!=0){
                return false;
                }
            n=n/3;
            }
        
        }

};