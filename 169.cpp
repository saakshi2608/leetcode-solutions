class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int max=0;
      map <int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]+=1;
            if (m[nums[i]]>n/2){
                max=nums[i];            }
        }
        return max;
    }
    
};