class Solution {
public:
         int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int>ans=heights;
  

       int cnt=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(ans[i]>ans[j]){
            swap(ans[i],ans[j]);
        }
    }
}
     

       for(int i=0;i<n;i++){

        if(ans[i]!=heights[i]){
          cnt++;

        }
       }
       return cnt;

    }
};
