class Solution{
public:
	int maxArea(vector<int> &height){
		int l = 0,r = height.size() - 1;
		int ans = 0;
		
		while(r<l){
			int ares = min(height[l], height[r])*(r-l);
			ans = max(ans, area);
			
			if(height[l] <= height[r]){
				l++;
			}else{
				r--;
			}
		}
		return ans;
	}
}
