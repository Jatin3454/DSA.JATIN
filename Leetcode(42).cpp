class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
        int left=0;
        int right=n-1;
        int lmax=height[left];
        int rmax=height[right];
        int ans=0;
        while(left<right){
            if(height[left]<height[right]){
                lmax=max(lmax,height[left]);
                ans+=lmax-height[left];
                left++;
                }
                else{
                    rmax=max(rmax,height[right]);
                      ans+=rmax-height[right];
                      right--;
                }
        }
        return ans;
    }
};
