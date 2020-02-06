#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int test = 9;
		for(auto it:digits){if(it!=9){test = 0;}}
		if(test == 9){digits.push_back(0); digits[0] = 1; 
			for(int i = 1; i<(n+1); i++){
			digits[i] = 0;
			}}
		else{
			for(int i = n-1; i>=0; i--){
				if(digits[i]!=9){digits[i] = ++digits[i]; break;}
				digits[i] = 0;
				}	
			}	
		for(auto it:digits) cout<<it;	
		return digits;
	}
int main(){
	vector <int> v = {6,1,4,5,3,9,0,1,9,5,1,8,6,7,0,5,5,4,3};
	plusOne(v);
	return 0;
	}
