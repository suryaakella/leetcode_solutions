#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> u;
        for(auto it:nums){ u[it]++; 
			if(u[it] > 1){return true;}
	}
        return false;
    }

int main(){
	 
	 vector <int> nums ={1,2,3,1};	
	 cout<<containsDuplicate(nums);
	 
	 return 0;
	 }
   
    
   
 
