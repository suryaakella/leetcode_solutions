class Solution {
public:

int fact(int size){if(size == 1 || size == 0 || size == 2) return size; 
	return size*fact(size-1);
	}

int k = 0;

vector<vector<int>> vec;

void pem( vector<int> nums, int l, int r){
	if(l == r){ 
		for(int j=0; j<nums.size();j++) {vec[k][j] = nums[j];}
		k++;
		}	
	else{
		for(int i = l ; i <= r; i++){
			swap(nums[l], nums[i]);
			pem(nums, l+1, r);
			swap(nums[l], nums[i]);
			}
		}
	}

    vector<vector<int>> permute(vector<int>& nums) {

    if(nums.size() == 0) return {{}};
    else if(nums.size() == 1) return {{nums[0]}};
	else if(nums.size() == 2) return {{nums[0],nums[1]},{nums[1],nums[0]}};
    vec = vector<vector<int>> (fact(nums.size()), (vector<int>(int(nums.size()), 0)));
    pem(nums, 0, nums.size()-1);

    return vec;
    }
};
