#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

    int majorityElement(vector<int>& nums) {
		int n = nums.size();
        unordered_map <int, int> u;
        for(auto it:nums){
			u[it]++;
			if(u[it] > int(n/2)){
				return it;
				}
			}
	return 0;		
    }

int main(){
	 
	 vector <int> nums = {2,2,1,1,1,2,2};
	 cout<<majorityElement(nums);
	 
	 return 0;
	 }
   
    
   
 
