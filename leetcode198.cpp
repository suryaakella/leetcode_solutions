#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int rob(vector<int>& nums) {
	int n;
	n = nums.size();
    if(n==0){return 0;}
    if(n==1){return nums[0];}
	vector <int> dp(n+1,0);
	dp[0]=nums[0];
	dp[1]=max(nums[0],nums[1]);
	for(int i=2;i<n;i++){dp[i] = max(dp[i-2] + nums[i-1], dp[i-1]);}
	for(int x:dp){cout<<x<<" ";}
	return *max_element(dp.begin(),dp.end());
}

int robc(vector<int>& nums) {
	int n;
	n = nums.size();
    if(n==0){return 0;}
    if(n==1){return nums[0];}
	vector <int> dp(n+1,0);
	dp[0]=0;
	dp[1]=nums[0];
	for(int i=1;i<n;i++){dp[i+1] = max(dp[i-1] + nums[i], dp[i]);}
	for(int x:dp){cout<<x<<" ";}	
	return *max_element(dp.begin(),dp.end());
}

int main(){
	vector <int> nums = {2,1,1,2};
	int result = rob(nums);
	cout<<endl;
	robc(nums);
	cout<<result;
	return 0;
	}
