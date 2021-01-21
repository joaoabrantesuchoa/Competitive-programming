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

ll t,d;

bool primos[100000];


int main() {
        NeedForSpeed

	cin >> t;

	memset(primos, true, sizeof(primos));

	for (int i = 2; i <= 100000; i++) {
		for (int j = i + i; j < 100000; j += i) {
			primos[j] = false;
		}
	}

	while(t--) {
		cin >> d;

		int P1,P2;

		for (int i = 1 + d; i <= 100000; i++) {
			if (primos[i]) {
				P1 = i;
				break;
			}
		}

		for (int i = P1 + d; i <= 100000; i++) {
			if (primos[i]) {
				P2 = i;
				break;
			}
		}

		cout << P1 * P2 << nl;
	}

        return 0;
}

