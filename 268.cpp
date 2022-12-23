class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,asum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            asum+=(i+1);
        }
        if(sum<=asum){
            return (asum-sum);
        }
        return 0;
    }
};