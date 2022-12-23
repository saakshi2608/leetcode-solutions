class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int>t1{1};
        vector<vector<int>>t{t1}; // [[1]]
        if (numRows==1){
            return t;
        }
        t1.push_back(1);
        t.push_back(t1); // [[1], [1, 1]]
        vector<int>t2;
        for(int i=2;i<numRows;i++){
            t2.push_back(1);
            t1=t[i-1];
            for(int j=1;j<t[i-1].size();j++){
                int sum=t1[j-1]+t1[j];
                t2.push_back(sum);
            }
            t2.push_back(1);
            t.push_back(t2);
            t2.clear();
        }
        return t;
    }
};