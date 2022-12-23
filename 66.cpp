class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        if(digits[len-1]<9){
            digits[len-1]+=1;
        }
        else if(digits[len-1]==9){
            int i=len-1;
            while(i>0 && digits[i]==9){
                digits[i]=0;
                i--;
            }
            if(digits[i]==9){
                digits[i]=1;
                digits.push_back(0);
            }
            else{
                digits[i]+=1;
            }
        }
        return digits;
    }
};