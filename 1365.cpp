class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        int number=0;
        vector<int>newnums;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j] && i!=j){
                    number+=1;
                }
            }
            newnums.push_back(number);
            number=0;
        }
        return newnums;
    }
};