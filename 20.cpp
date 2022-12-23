class Solution {
public:
    bool isValid(string s) {
        int l=s.size();
        stack<char>st;
        for(int i=0;i<l;i++){
            if(s[i]=='(' ||s[i]=='{'  || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.empty()){
                    st.push(s[i]);
                }
                else if(st.top()=='('){
                    st.pop();
                }
                else{
                    //cout<<"false";
                    return false;
                }
            }
             else if(s[i]=='}'){
                 if(st.empty()){
                     st.push(s[i]);
                 }
                 
                 else if(st.top()=='{'){
                     st.pop();
                 }
                 else{
                 //cout<<"false";
                 return false;
                 }
        }
         else if(s[i]==']'){
             if(st.empty()){
                 st.push(s[i]);
             }
             
             else if(st.top()=='['){
                 st.pop();
             }
             else{
                 //cout<<"false";
                 return false;
             }
         }
         else if(st.empty()==true){
             //cout<<"true";
             return true;
         }
    }
    //cout<<"true";
    if(st.empty()!=true){
        return false;
    }
    return true;
   
    }
};