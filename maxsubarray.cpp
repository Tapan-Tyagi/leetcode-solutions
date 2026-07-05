// Optimal Approach : Kadane's Algorithm
// T.C = O(n)
// S.C = O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // Stores maximum subarray sum found so far
        long long maxi = LLONG_MIN;

        // Current subarray sum
        long long sum = 0;

        // Traverse the array
        for (int i = 0; i < nums.size(); i++) {

            // Include current element in subarray
            sum += nums[i];

            // Update maximum sum
            maxi = max(maxi, sum);

            // If sum becomes negative,
            // discard this subarray and start fresh
            if (sum < 0) {
                sum = 0;
            }
        }

        return maxi;
    }
};
