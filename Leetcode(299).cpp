class Solution {
public:
    string getHint(string secret, string guess) {
        int n=secret.size(),m=guess.size();
        int cowCount=0,bullsCount=0; 
        for(int i=0;i<n;i++){
                if(secret[i]==guess[i]){
                 bullsCount++;
                secret[i]='k';
                guess[i]='k';
                }
            }
            for(int i=0;i<n;i++){
                if(secret[i]=='k')continue;
                for(int j=0;j<m;j++){
                    if(guess[j]=='k')continue;
                    if(secret[i]==guess[j]){
                        cowCount++;
                    guess[j]='k';
                    break;

                    }
                    
                }
            }
        return to_string(bullsCount)+"A"+to_string(cowCount)+"B";

    }
};
