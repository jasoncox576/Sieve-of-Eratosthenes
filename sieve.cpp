#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cmath>

using namespace std;

vector<int> sieve(int n) {

	vector<bool> table;
	table.resize(n, true);
	vector<int> primes;
	
	int p;
	for(int i = 2; i < n; ++i) {
		p = i;

		if(table[p - 1] == false) {
			continue;
		}

		int iter = pow(p,2);
		for(; iter <= n; iter += p) {
			table[iter - 1] = false;
		}


	}

	for(int x = 0; x < table.size(); ++x) {
		
		if(table[x] == true) {
			primes.push_back(x + 1);
		}
	}
	return primes;

}




int main() {

	int n;
	cout << "Welcome to the Sieve of Eratosthenes. Enter a number n: " << endl;
	cin >> n;
	vector<int> primes;
	primes = sieve(n);
	cout << "These are all of the prime numbers up to " << n << endl;
	for(int x : primes) {

		cout << x << endl;
	}



}
