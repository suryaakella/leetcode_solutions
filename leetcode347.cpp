#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

    vector<int> result;
    bool cmp(pair<int, int> x, pair<int, int> y){
        return (x.second > y.second);
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> u;
        for(auto it:nums) u[it]++;
        vector <pair<int, int>> vec;
        for(auto it:u) vec.push_back(make_pair(it.first, it.second));
        sort(vec.begin(), vec.end(), cmp);
        for(auto it:vec){if(k == 0) break; else{result.push_back(it.first); k--;}}
        return result;
        }

int main(){
	vector <int> vec;
	vector <int> nums = {1,1,1,2,2,3};
	vec = topKFrequent(nums,2);
	for(auto it:vec) cout<<it<<" ";
	return 0;
	}
