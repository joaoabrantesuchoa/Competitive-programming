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

int n;

int main() {
        NeedForSpeed

	cin >> n;

	if (n >= 1 && n <= 4) cout << "few" << nl;
	if (n >= 5 && n <= 9) cout << "several" << nl;
	if (n >= 10 && n <= 19) cout << "pack" << nl;
	if (n >= 20 && n <= 49) cout << "lots" << nl;
	if (n >= 50 && n <= 99) cout << "horde" << nl;
	if (n >= 100 && n <= 249) cout << "throng" << nl;
	if (n >= 250 && n <= 499) cout << "swarm" << nl;
	if (n >= 500 && n <= 999) cout << "zounds" << nl;
	if (n >= 1000) cout << "legion" << nl;

        return 0;
}

