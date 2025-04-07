class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector<int>ans;
        int n = prices.size();
        if(n==1) return 0;

        int minprofit=prices[0];
        int maxprofit=0;

        for(int i=1;i<n;i++){
            if(prices[i]<minprofit){
                minprofit=prices[i];
            }
            else{
                int ans = prices[i] - minprofit;
                if (ans > maxprofit) {
                    maxprofit = ans;
                }
            }
        }
        return  maxprofit;
    }
};
