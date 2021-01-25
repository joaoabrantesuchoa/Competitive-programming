#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<int,pii> iii;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef priority_queue<pii, vector<pii>, greater<pii>> fila_prioridade;
typedef priority_queue<iii, vector<iii>, greater<iii>> fila_prioridade_grids;
typedef vector<vii> grafo_dj;


#define preencher_negativo(memo) memset(memo, -1, sizeof memo) 
#define preencher_zero(arr) memset(arr, 0, sizeof arr)
#define sz(x) (int)x.size()
#define nl '\n'
#define INF 1000000000
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define NeedForSpeed ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define arredondar_para_cima(d) (int)((double)d + 0.5)
#define all(a) a.begin(), a.end()
#define EdgeList vector<pair<int,ii>>

bool primes[1000009];
int tuples[1000009];
int t,n;

int main() {
        NeedForSpeed

	memset(primes, true, sizeof(primes));

	primes[1] = false;

	for (int i = 2; i <= 1000009; i++) {
		for (int j = i + i; j <= 1000009; j += i) {
			primes[j] = false;
		}
	}

	tuples[0] = 0;
	tuples[1] = 0;
	tuples[2] = 0;
	tuples[3] = 0;
	tuples[4] = 0;
	tuples[5] = 1;

	for (int i = 4; i <= 1000000; i++) {
		
		if (primes[2 + i] && primes[i]) {
			tuples[2 + i] = tuples[2 + i - 1] + 1;
		} else {
			tuples[2 + i] = tuples[2 + i - 1];
		}
	}

	cin >> t;

	while(t--) {
		cin >> n;

		cout << tuples[n] << nl;
	}


        return 0;
}

