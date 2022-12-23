class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // 1010 -> 0101
        // 0000000000000001010 -> 010100000000000000000
        long long r=0, rev=0, count=0;
        while(n>0){
            r=n%2;
            rev+=r;
            rev=rev<<1; 
            n=n/2;
            count+=1;
        }
        rev >>= 1;
        int add=32-count;
        for(int i=0;i<add;i++){
            rev=rev<<1;
        }
        return rev;
    }
};