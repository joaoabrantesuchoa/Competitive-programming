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

ll t,n;
ll score[200009];
ll resposta;
ll dp[100009];


int main() {
        NeedForSpeed

	cin >> t;

	while(t--) {
		cin >> n;

		memset(dp, 0, sizeof(dp));
		resposta = 0;
		
		for (int i = 0; i < n; i++) cin >> score[i];

		for (int i = n - 1; i >= 0; i--) {
			dp[i] = score[i];

			ll destino = i + score[i];

			if (destino < n) dp[i] = dp[i] + dp[destino];
		}

		for (int i = 0; i < n; i++) {
			resposta = max(resposta, dp[i]);
		}

		cout << resposta << nl;
	}


        return 0;
}

