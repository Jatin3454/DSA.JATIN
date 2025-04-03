class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        vector<int>ans;
       for(int i=0;i<nums.size();i++){
    // Do something with 'num'
    if(nums[i]!=val){
        count++;
        ans.push_back(nums[i]);
    }
}
    nums.clear();
    nums=ans;
    return count;
    }
};
