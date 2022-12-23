class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len= nums.size();
        int z=0;
        for(int i=0; i<len;i++){
            z=z^nums[i];
        }
        return z;
    }
     
};