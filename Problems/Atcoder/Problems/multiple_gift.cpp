#include <bits/stdc++.h>

using namespace std;

#define ll long long 

ll x,y; 
ll lenght = 0;
ll multiple;


int main() {

	cin >> x >> y;
	multiple = x;

	while(multiple <= y) {
		lenght++;
		multiple *= 2;
	}

	cout << lenght << "\n";

	return 0;
}

