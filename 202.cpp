class Solution {
public:
    bool isHappy(int n) {
        vector<int> list;
        list.push_back(n);
        while(true) {
            if(n==1){
                return true;
            }
            int square=1;
            int sum=0;
            while(n>0) {
              int x=n%10;
              square=x*x;
              sum+=square;
              n=n/10;
            }  
            int s=list.size();
            for(int i=0;i<s;i++){
                if(list[i]==sum){
                    return false;
                }
            }
            n = sum;
            list.push_back(sum);
            
        }
       
    }
};