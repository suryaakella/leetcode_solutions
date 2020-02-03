#include <iostream>
#include <bits/stdc++.h> 
using namespace std;


    int singleNumber(vector<int>& nums) {
	unordered_map <int,int> u;
	int max=0,e;
    for(auto x:nums){++u[x]; if(u[x] <= max){max=u[x]; e = x;}}
    return e; 
    }

 
int main(){
	 
	 vector <int> nums = {3,3,3,3,3,31,4};
	 singleNumber(nums);
	 
	 return 0;
	 }
