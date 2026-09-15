class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        stack<char>st;
        int count = 0;

        for(char ch:s){
            if(ch == '('){
                if(count>0){
                    ans+=ch;
                }
                count++;
            }
            else{
                count--;
                if(count>0){
                    ans+=ch;
                }
            }
        }
        return ans;
    }
};
