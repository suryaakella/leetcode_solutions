#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     vector <int> result;
     int n1 = nums1.size(), n2= nums2.size();
     unordered_map <int, int> u1, u2;
     for(auto it:nums1) u1[it]++;
     for(auto it:nums2) u2[it]++;
     if(n1 < n2){
		 for(auto it:nums1){
		 if(u1[it] > 0 && u2[it] > 0){
		 result.push_back(it);
		 u1[it]--;
		 u2[it]--;
		 }}}   
	else  {
		 for(auto it:nums2){
		 if(u1[it] > 0 && u2[it] > 0){
		 result.push_back(it);
		 u1[it]--;
		 u2[it]--;
		 }}}
	for(auto it:result) cout<<it;
	return result;
    }	

int main(){
	vector <int> nums1 = {1,2,2,1};
	vector <int> nums2 = {2,2};
	intersect(nums1, nums2);
	 return 0; 
	 }
   
    
   
 
