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


int flag[4];
string s;

int main() {
        NeedForSpeed

	cin >> s;

	for (int i = 0; i < sz(s); i++) {
		if (s[i] == 'E') {
			flag[0] = 1;
		} else if (s[i] == 'W') {
			flag[1] = 1;
		} else if (s[i] == 'S') {
			flag[2] = 1;
		} else if (s[i] == 'N') {
			flag[3] = 1;
		}
	}

	if (flag[0] == flag[1] && flag[2] == flag[3]) cout << "Yes" << nl;
	else cout << "No" << nl;

        return 0;
}

