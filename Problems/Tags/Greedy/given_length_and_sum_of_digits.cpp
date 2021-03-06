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

int m,s;

int main() {
        NeedForSpeed

	cin >> m >> s;


	if ((s < 1 && m > 1) || s > m * 9) {
		cout << -1 << " " << -1 << nl;
	} else {
		for (int i = m - 1, soma = s; i >= 0; i--) {
			int numero = max(0, soma - 9 * i);

			if (numero == 0 && i == m - 1 && soma != 0) {
				numero = 1;
			}

			cout << numero;
			soma -= numero;
		}

		cout << " ";

		for (int i = m - 1, soma = s; i >= 0; i--) {
			int numero = min(9, soma);

			cout << numero;
			soma -= numero;
		}

		cout << nl;
	}

        return 0;
}

