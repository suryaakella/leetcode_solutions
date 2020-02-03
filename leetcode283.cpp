#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void moveZeroes(vector<int>& nums) {    
	int i = 0, j = 0, n = nums.size();
	for(j = 0 ; j < n; j++){
		if(nums[j] != 0){
		nums[i] = nums[j];
		i++;
		}
		}
	while(i<n){nums[i] = 0; i++;}
	for(auto it:nums) cout<<it;
	}

int main(){
	 
	 vector <int> nums = {0,1,0,3,12};
	 moveZeroes(nums);
	 
	 return 0;
	 }
   
    
   
 
