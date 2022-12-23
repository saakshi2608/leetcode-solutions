class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastzero=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[lastzero++]=nums[i];

            }
        }for(int i=lastzero;i<n;i++){
            nums[i]=0;
        }
    }
};