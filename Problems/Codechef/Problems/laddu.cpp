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

int t, qtd_atividades, ranking, severidade;
string atividade, nacionalidade;


int main() {
        NeedForSpeed

	cin >> t;

	while(t--) {
		cin >> qtd_atividades >> nacionalidade;
	
		int total = 0;

		for (int i = 0; i < qtd_atividades; i++) {
			cin >> atividade;

			if (atividade == "CONTEST_WON") {
				cin >> ranking;
				total += 300 + max(20 - ranking, 0);
			} else if (atividade == "BUG_FOUND") {
				cin >> severidade;
				total += severidade;
			} else if (atividade == "CONTEST_HOSTED") {
				total += 50;
			} else if (atividade == "TOP_CONTRIBUTOR") {
				total += 300;
			}
		}

		if (nacionalidade == "INDIAN") {
			cout << total / 200 << nl;
		} else if (nacionalidade == "NON_INDIAN") {
			cout << total / 400 << nl;
		}

	}


        return 0;
}

