// Tabulation (Bottom-Up)
#include <vector>
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;
        std::vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};

// Tabulation (Bottom-Up) - Space Optimized
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;
        int one = 1;
        int two = 1;
        int current;
        for (int i = 2; i <= n; ++i) {
            current = one + two;
            two = one;
            one = current;
        }
        return one;
    }
};