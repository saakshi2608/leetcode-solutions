class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        if (x==0) return true;
        vector<int> list;
        int number=x;
        while (number!=0){
            int digit=number%10;
            number/=10;
            list.push_back(digit);
        }
        
        int n = list.size();
        for(int j=n-1, i=0; j>=n/2; j--, i++){
            if(list[i]!=list[j]){
                return false;
            }
        }
        return true;
    }
};