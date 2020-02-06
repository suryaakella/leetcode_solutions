#include <iostream>
#include <vector>

using namespace std;

    vector<vector<int>> generate(int numRows) {
		if(numRows == 0){ vector<vector<int>> matrix; return matrix;}
		if(numRows == 1){ vector<vector<int>> matrix(numRows); matrix[0].push_back(1); return matrix;}
		int n;
        vector<vector<int>> matrix(numRows);
        matrix[0].push_back(1);
		matrix[1].push_back(1);
		matrix[1].push_back(1);
        for(int i=2;i<numRows;i++){
			matrix[i].push_back(1);
			n = matrix[i-1].size();
			for(int j = 0 ;(j+1)< n; j++){matrix[i].push_back(matrix[i-1][j] + matrix[i-1][j+1]);}	
			matrix[i].push_back(1);
			}
       for(int i = 0 ;i<numRows;i++){for(auto it:matrix[i]){cout<<it;}cout<<endl;}
        return matrix;
    }

int main(){
	int numRows = 0;
	generate(numRows);
	
	return 0;
	}
