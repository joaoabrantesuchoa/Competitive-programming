#include <bits/stdc++.h>

using namespace std;

//A number is compost if it has a factor not equal to 1 and <= sqrt(itself).
//The concept of all the pairs of factors are present below sqrt(number) can be use too for 
//find the number of divisors of a number.A number is composite if it has a factor not equal to 1 and <= sqrt(itself). 
//This occurs because all the divisors <= sqrt(number) have a complement. This pair is formed by (factor, number/factor).
//The concept of all the pairs of factors are present below sqrt(number) can be used too for finding the number of divisors of a number.

int number;
bool prime = true;

bool is_prime(int number) {
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

int qtd_divisors(int number) {
	int qtd_divisors = 0;
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0 && number / i != i) {
			qtd_divisors += 2;
		} else if (number % i == 0) {
			qtd_divisors += 1;
		}
	}
	return qtd_divisors;
}

vector<int> factors(int n) {
	vector<int> f;
	for (int i = 2; i * i <= n; i++) {
		while(n % i == 0) {
			f.push_back(i);
			n /= i;
		}
	}
	if (n > 1) f.push_back(n);
	return f;
}

int main() {
	cin >> number;

	cout << is_prime(number) << "\n";
	cout << qtd_divisors(number) << "\n";
	vector<int> F = factors(number);
	for (auto x : F) {
		cout << x << " ";
	}
	cout << "\n";

	return 0;
}
