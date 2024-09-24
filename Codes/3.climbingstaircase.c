// dynamic programming
// rolling array principle

int climbStairs(int n) {
	int flag = 1;
	int p = 0;
	int q = 0;
	for(int i = 0; i < n+1; i++) {
		p = q;
		q = flag;
		flag = p + q;
	}
	return flag;
}