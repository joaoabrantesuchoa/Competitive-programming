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
int P[10], Q[10];
int arr[10];

int main() {
        NeedForSpeed

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> P[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> Q[i];
	}

	for (int i = 1; i <= n; i++) {
		arr[i - 1] = i;
	}

	int a = -1 ,b = -1;
	int id = 1;
	
	do {
		bool igual_P = true;
		bool igual_Q = true;
		for (int i = 0; i < n; i++) {
			if (arr[i] != P[i]) igual_P = false;
			if (arr[i] != Q[i]) igual_Q = false;
		}

		if (igual_P) {
			a = id;	
		}	

		if (igual_Q) {
			b = id;
		}

		id++;
	} while(next_permutation(arr, arr + n));
	cout << abs(a - b) << nl;
	

        return 0;
}

