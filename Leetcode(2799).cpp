class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        int k=unordered_set<int>(nums.begin(),nums.end()).size();
        int count=0;

        for(int i=0;i<n;i++){
            unordered_set<int>s;
             for(int j=i;j<n;j++){
                s.insert(nums[j]);
                if(s.size()==k)count++;
             }
        }
        return count;
    }
};
