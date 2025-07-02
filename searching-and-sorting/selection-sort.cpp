class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            // Find the index of the smallest element in the unsorted part
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            // Swap the smallest with the first element of unsorted part
            if (minIndex != i) {
                swap(nums[i], nums[minIndex]);
            }
        }
    }
};
