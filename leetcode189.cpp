#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void rotate(vector<int>& nums, int k) {
    k = k%nums.size();	
	reverse(nums.begin(), nums.end());
	reverse(nums.begin()+k, nums.end());
	reverse(nums.begin(), nums.begin()+k);

}    

int main(){
	vector <int> nums = {1,2,3,4,5,6,7};
	rotate(nums, 3);
		
	
	
	return 0;
	 }
