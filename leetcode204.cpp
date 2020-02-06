#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int countPrimes(int n) {
	int cnt = 0,j=2;
	vector <int> primes(n+1, 1);
	for(int i = 2 ; i <= n; i++){
		j=2;
		if(primes[i] == 0){continue;}
		while((j*i) < n){
			primes[j*i] = 0;
			j++;
			}
		}
	for(int i =2; i<n; i++){
		if(primes[i] == 1){cnt++;}
		}	
	return cnt;
}

int main(){
	cout<<countPrimes(3);	
	
	return 0;
	}
