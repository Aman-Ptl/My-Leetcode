class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int gola_index = -1;

        // Step 1: find pivot
        for (int i = n - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                gola_index = i - 1;
                break;
            }
        }

        if (gola_index != -1) {
            // Step 2: find smallest number larger than pivot to the right
            int swap_index = -1;
            for (int j = n - 1; j > gola_index; j--) {
                if (nums[j] > nums[gola_index]) {
                    swap_index = j;
                    break;
                }
            }

            // Step 3: swap
            swap(nums[gola_index], nums[swap_index]);
        }

        // Step 4: always reverse suffix
        reverse(nums.begin() + gola_index + 1, nums.end());
    }
};
