#include <iostream>
#include <vector>
#include <stack>
using namespace std;

    bool isValid(string s) {
    stack <char> stk;
    for(auto it:s){if(it == '('|| it == '[' || it =='{') stk.push(it);
        else if(stk.empty()) return false;
		else if(it == ')'){if(stk.top() != '(') return false; else stk.pop();}
		else if(it == ']'){if(stk.top() != '[') return false; else stk.pop();}
		else if(it == '}'){if(stk.top() != '{') return false; else stk.pop();}

		 } 
    if(stk.empty()) return true;  
    return false;
    }
    
int main(){
	string s = "";
//	cout<<isValid(s);
	cout<<int('a');
	return 0;
	}

