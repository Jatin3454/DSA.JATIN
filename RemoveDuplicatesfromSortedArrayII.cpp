class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
        if (n <= 2) return n;
        int i = 1; // Start from the second element
        for (int j = 2; j < n; j++) {
            if (nums[j] != nums[i - 1]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
