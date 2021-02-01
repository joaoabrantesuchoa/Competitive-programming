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


string S;
int qtd_c = 0;
bool lower_case = true;
bool a = false;

int main() {
        NeedForSpeed

	cin >> S;

	for (int i = 0; i < sz(S); i++) {
		if (i == 0 && S[i] == 'A') a = true;

		if (i >= 2 && i <= sz(S) - 2) {
			if (S[i] == 'C')qtd_c++;
		} 

		if (S[i] != 'A' && S[i] != 'C') {
			if (S[i] < 'a' || S[i] > 'z') {
				lower_case = false;	
			}
		}
	}

	//cout << qtd_c << " " << a << " " << lower_case << nl;

	if (qtd_c == 1 && a && lower_case) cout << "AC" << nl;
	else cout << "WA" << nl;

        return 0;
}

