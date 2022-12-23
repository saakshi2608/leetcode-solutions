class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int>count;
        int n=deck.size();
        for(int i=0;i<n;i++){
            count[deck[i]]+=1;
        }
        int s=count.size();
        int minm=889289289;
        for(auto &[key, value]: count){
            if(value<minm){
                minm=value;
            }
        }
        bool check;
        int i=2;
        while(i<=minm){
            check = true;
            for(auto &[key, value]: count){
                if(value%i!=0){
                    check=false;
                    break;
                }
            }
            if(check){
                return true;
            }
            i++;
        }
        return false;
    }
};