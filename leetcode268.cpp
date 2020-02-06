#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

    int missingNumber(vector<int>& nums) {
		int result=0;
		for(int i=0;i<=nums.size();i++){result = result^i;}
		for(auto it:nums){result^=it;}
		cout<<(result);	
		return result;
		}

int main(){
	vector <int> nums = {0,1};
	missingNumber(nums);
	 return 0; 
	 }
   
    
   
 
