class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        map<int, int>cnts;
        for(int i=0; i<n; ++i) {
            cnts[nums[i]] = cnts[nums[i]] + 1;
        }\
        for(int num: nums){
            if(cnts[num] == 1) sum+= num;
        }
        return sum;
    }
};