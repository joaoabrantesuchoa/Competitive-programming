#include <bits/stdc++.h>

using namespace std;

#define aproximation 1e-7

int p,q,r,s,t,u;

double f(double x) {
	return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double bisection() {
	double l = 0;
	double r = 1;

	while(l + aproximation < r) {
		double x = (l + r) / 2;

		if (f(l) * f(x) <= 0) {
			r = x;
		} else {
			l = x;
		}
	}
	return (l + r) / 2;
}

int main() {
	while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF) {
		if (f(0) * f(1) > 0) { //For the method of bisection: only exits a root if the signals are differents.
			cout << "No solution" << "\n";
		} else {
			printf("%.4lf\n", bisection());
		}
	}


	return 0;
}