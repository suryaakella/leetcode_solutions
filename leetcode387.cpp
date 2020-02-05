#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

    int firstUniqChar(string s) {
	unordered_map <char, int> u;
	int i=0;
	for(auto it:s) u[it]++;
	for(auto it:s){if(u[it] == 1){return i;} i++;};		

	return -1;		
    }

int main(){
	string s= "leetcode";
	cout<<firstUniqChar(s);
	 
	 return 0;
	 }
   
    
   
 
