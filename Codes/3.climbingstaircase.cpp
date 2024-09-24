// recursive

class Solution {
public:
	int climbStairs(int n) {
		if(n == 1) {
			return 1;
		}
		if(n == 2) {
			return 2;
		}
		return climbStairs(n - 1) + climbStairs(n - 2);
	}
};

// memorization recursive
class Solution {
public:
	int climbStairs(int n) {
		std::vector<int> memo(n + 1);
		return climbStairsMemo(n, memo);
	}
	int climbStairsMemo(int n, std::vector<int> &memo) {
		if(memo[n] > 0) {
			return memo[n];
		}
		if(n == 1) {
			memo[n] = 1;
		}else if(n == 2) {
			memo[n] = 2;
		}else {
			memo[n] = climbStairsMemo(n -1, memo) + climbStairsMemo(n - 2, memo); 
		}
		return memo[n];
	}
};

// dynamic programming

class Solution {
public:
	int climbStairs(int n) {
		if (n == 1) {
			return 1;
		}
		std::vector<int> dp(n + 1);
		dp[1] = 1;
		dp[2] = 2;
		for (int i = 3; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2];
		}
		return dp[n];
	}
};