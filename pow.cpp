class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; // Prevent INT_MIN overflow
        
        if (N < 0) {
            x = 1 / x;   // Invert the base
            N = -N;      // Make the exponent positive
        }
        
        double ans = 1.0;
        while (N > 0) {
            if (N % 2 == 1) {
                ans *= x; // Multiply if current power is odd
            }
            x *= x;       // Square the base
            N /= 2;       // Halve the power
        }
        
        return ans;
    }
};
