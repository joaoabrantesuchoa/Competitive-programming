#include <bits/stdc++.h>

using namespace std;

/*Given two integers n and k, count the number of arrays of length n such that:
all its elements are integers between 0 and 2k−1 (inclusive);
the bitwise AND of all its elements is 0;
the sum of its elements is as large as possible.
Print the answer % 10^9+7.
*/

/*
In the first example the bigger sum possible is 2^2 - 1 = 3. In binary we represent this with k digits.
11 is the maximum sum we can get. Now we should represent each element as their binary representation.
We have two elements, so:

E1 -> __
E2 -> 11
We need to permutate one bit of each value to make the AND operation equals to 0.

E1 -> 01
E2 -> 10. Represents [1, 2]

E1 -> 10
E2 -> 01. Represents[2, 1]

E1 -> 11
E2 -> 00. Represents[3, 0]

E1 -> 00
E2 -> 11. Represents[0, 3]

We can note the answer is : n^k, because we have N elements and we have to permutate one bit of each element to 
the complement.

*/

long long t,n,k;
#define MOD 1000000007


int main() {

    cin >> t;

    while(t--) {
        cin >> n >> k;
        long long answer = 1;
        for (int i = 0; i < k; i++) {
            answer = (answer * n) %MOD;
        }
        cout << answer << "\n";
    }

    return 0;
}