class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len;
        len=nums.size();
        bool found=false;
        for(int i=0;i<len;i++) {
            if(nums[i]==target){
                return i;
                found=true;
                break;
                }
        }
        
        if(found==false) {
            if(nums[len-1]>target) {
                for(int i=0;i<len;i++) {
                    if(nums[i]>target) {
                        return i;
                        break;
                    }
                       
                }
                        
            }  
            else {
                return len;
            }
                
        }
        return 0;
    }
};