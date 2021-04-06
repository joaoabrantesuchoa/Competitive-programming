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
			cout << i << " " << number / i << "\n";
		} else if (number % i == 0) {
			qtd_divisors += 1;
			cout << i << "\n";
		}
	}
	return qtd_divisors;
}

int main() {
	cin >> number;

	cout << "é primo: " << is_prime(number) << "\n";
	cout << qtd_divisors(number) << "\n";

	return 0;
}
