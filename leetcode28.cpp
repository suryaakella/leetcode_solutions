#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

//rabin karp algorithm
int strStr(string haystack, string needle) {
	if(needle == "") return 0;
	else{
		int needle_size = needle.size();
		int haystack_size = haystack.size();
		unordered_map <string, int> u;
		u[needle] = 1;
		for(int i = 0;i<haystack_size; i++){
			if(u[haystack.substr(i,needle_size)] == 1) return i;
			}
		}
		return -1;
}

int main(){
	string haystack = "hello", needle = "ll";
	cout<<strStr(haystack, needle);

return 0;
}
