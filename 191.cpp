class Solution {
public:
    int hammingWeight(uint32_t n) {
        int r,count=0;
        while(n>0){
            r=n%2;
            if(r==1){
                count++;
            }
            n=n/2;
        }
        return count;
    }
};