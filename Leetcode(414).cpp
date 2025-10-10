class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
       int  cnt=1;
      
       sort(nums.begin(),nums.end());
         if(n<=2)return nums[n-1];
       int max=nums[n-1];
       for(int i=n-2;i>=0;i--){
        if(nums[i]!=nums[i+1]){
            cnt++;
        }
        if(cnt==3){
           return nums[i];
           
        }
       }
       return max;

    }
};
