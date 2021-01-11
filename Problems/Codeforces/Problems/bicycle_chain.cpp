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

int n,m;
int A[60], B[60];

int main() {
        NeedForSpeed

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	cin >> m;

	for (int j = 0; j < m; j++) {
		cin >> B[j];
	}

	int radio;
	int maior_radio = 0;
	int qtd_maior_radio = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (B[j] % A[i] == 0) {
				radio = B[j] / A[i];

				if (radio > maior_radio) maior_radio = radio;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (B[j] % A[i] == 0) {
				if (B[j] / A[i] == maior_radio) qtd_maior_radio++;
			}
		}
	}

	cout << qtd_maior_radio << nl;

        return 0;
}

