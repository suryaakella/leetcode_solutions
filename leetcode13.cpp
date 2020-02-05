#include <iostream>
#include <bits/stdc++.h> 
#include <string>
using namespace std;
int romanToInt(string s) {
	unordered_map <char, int> u;
	u['I'] = 1;
	u['V'] = 5;
	u['X'] = 10;
	u['L'] = 50;
	u['C'] = 100;
	u['D'] = 500;
	u['M'] = 1000;
	
	int n = s.size();
	int sum = u[s[0]];
     for(int i = 1 ; i < n; i++){
		 if(u[s[i]] <= u[s[i-1]]) sum+=u[s[i]];
		 else sum = sum + u[s[i]] - 2 * u[s[i-1]];
		 }   
	return sum;
    }


int main()
{
	string s = "MCMXCIV";
	cout<<romanToInt(s);
	
	return 0;
}

