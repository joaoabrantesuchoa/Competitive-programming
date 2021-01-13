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

int k;
int arr[13];

int main() {
        NeedForSpeed

	cin >> k;

	int soma = 0;

	for (int i = 0; i < 12; i++) {
		cin >> arr[i];
		soma += arr[i];
	}

	if (soma < k) {
		cout << -1 << nl;
		exit(0);
	}

	sort(arr, arr + 12, greater<int>());

	int qtd = 0;
	int crescimento = 0;
	int i = 0;

	while(true) {
		if (crescimento < k) {
			qtd++;
			crescimento += arr[i];
			i++;
		} else {
			break;
		}
	}

	cout << qtd << nl;

        return 0;
}

