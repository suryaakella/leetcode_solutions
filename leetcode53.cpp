#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <climits>
using namespace std;
int maxSubArray(vector<int>& nums) {
	int n = nums.size();
	vector <int> dp(n,INT_MIN);
	dp[0] = nums[0];
	for(int i = 0; i < n-1; i++){
		dp[i+1] = max(nums[i+1], nums[i+1] + dp[i]);
		}
	int result = *max_element(dp.begin(), dp.end());
	cout<<result;
return result;
}
int main(){
	vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
	maxSubArray(nums);
	return 0;
	}
