#include <iostream>
#include <string>
#include <vector>
using namespace std;
    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";		
		int index_result = 0,remember_index=0,test = 1;
        int min_size_string_in_vector = strs[0].size(), strs_size = strs.size();
        for(int i = 0; i < strs_size; i++){if(min_size_string_in_vector > int(strs[i].size())) {min_size_string_in_vector = strs[i].size(); remember_index = i;}} 
	//	cout<<min_size_string_in_vector<<endl;
		for(int j=0;j<min_size_string_in_vector;j++){				
		for(int i = 0; i < strs_size-1; i++){
				test = 1;
				if(strs[i][j] != strs[i+1][j]) {test = 0; break;}
			}
			if(test==1) index_result++;
			else if(test==0) { return strs[remember_index].substr(0,index_result);}
		} 
		return strs[remember_index];
    }
    
int main(){
	vector <string> strs = {"b","cb","cab"};
//	for(int i = 0 ; i<int(strs.size()); i++) {for(auto it:strs[i]) cout<<it;}
	string longest_common_prefix;
	longest_common_prefix = longestCommonPrefix(strs);	
	for(auto it:longest_common_prefix) cout<<it;
	return 0;
	}
