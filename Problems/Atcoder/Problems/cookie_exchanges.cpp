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

int a,b,c;

int main() {
        NeedForSpeed

	cin >> a >> b >> c;

	int qtd = 0;

	if (a == b && a == c && a % 2 == 0) {
		cout << -1 << nl;
	} else if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0) {
		cout << 0 << nl;	
	} else {
		while(a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
			
			int n1 = (b + c) / 2;
			int n2 = (a + c) / 2;
			int n3 = (a + b) / 2;

			a = n1;
			b = n2;
			c = n3;

			qtd++;
		}
		cout << qtd << nl;
	}


        return 0;
}

