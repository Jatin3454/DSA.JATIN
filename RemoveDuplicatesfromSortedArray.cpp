class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        vector<int>ans;
        if(nums.size()<=1){
            ans.push_back(nums[0]);
        }
        for(int i=0;i<nums.size();i++){
            if (i == nums.size() - 1 || nums[i] != nums[i + 1]) {
                count++;
                ans.push_back(nums[i]);
            }
        }
         nums = ans; 
        return count;
    }
};
