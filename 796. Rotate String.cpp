class Solution {
public:
    bool rotateString(string s, string goal) {
        int m=s.length();
        int n=goal.size();
        if(m != n) return false;
        s+=s;
        for(int i=0;i<m;i++){
            bool match = true;
            for(int j=0;j<m;j++){
                if(s[i+j]!=goal[j]){
                    match=false;
                    break;
                }
            }
            if(match)return true;
        }
        return false;
    }
};
