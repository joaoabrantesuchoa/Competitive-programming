#include <bits/stdc++.h>

using namespace std;

//Explanation: we need to find the earliest time of the last 
//delivery. To find we brute force all the possibilities.
//The TL is 2 seconds, so the total of possibilities is 
//5 ^ 2 = 25 and the maximum final time is 643

int times[5];

int calculate_time(int arr[]) {
	int new_time  = 0;
	for (int i = 0; i < 5; i++) {
		new_time += arr[i];
		if (new_time % 10 != 0 && i != 4) {
			int n1 = new_time % 10;
			int n2 = new_time - n1;
			new_time += (n2 + 10 - new_time);
		}
	}
	return new_time;
}

int main() {
	for (int i = 0; i < 5; i++) {
		cin >> times[i];
	}
	int minimum_time = 1000;
	do {
		minimum_time = min(minimum_time, calculate_time(times));
	} while(next_permutation(times, times + 5));
	cout << minimum_time << "\n";
	return 0;
}
