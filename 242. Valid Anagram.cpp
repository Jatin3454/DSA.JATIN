class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);
        for(char c:s){
            count[c-'a']++;
        }
        //vcetor<int>count{26,0};
        for(char c:t){
            count[c-'a']--;
        }
        for(int x:count){
            if(x!=0)return false;
        }

        return  true;
    }
};
