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

int n,m,a,b;
int valores[3];

int main() {
        NeedForSpeed

	cin >> n >> m >> a >> b;

	valores[0] = ceil(n / m) * b;

	if (n % m == 0) valores[0] = (n / m) * b;
	else valores[0] = ((n / m) + 1) * b;

	valores[1] = a * n;
	valores[2] = (n / m) * b + (n % m) * a;

	//cout << valores[0] << " " << valores[1] << " " << valores[2] << nl;

	sort(valores, valores + 3);

	

	cout << valores[0] << nl;

        return 0;
}

