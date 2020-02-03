#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

    bool isAnagram(string s, string t) {
    unordered_map <char, int> us, ut;
    for(auto it:s) us[it]++;
    for(auto it:s) ut[it]++;
    for(auto it:s){if(us[it] != ut[it]){return false;}}
	return true;
    }

int main(){
	 
	 string s = "anagram";
	 string t = "nagaram";
	 cout<<isAnagram(s, t);
	 
	 return 0;
	 }
   
    
   
 
