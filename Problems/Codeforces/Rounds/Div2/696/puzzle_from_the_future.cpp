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

int t,n;
string a;
string b;


int main() {
        NeedForSpeed

	cin >> t;

	while(t--) {
		b.clear();

		cin >> n >> a;

		char anterior = '5';

		for (int i = 0; i < n; i++) {
			if (a[i] == '0') {
				if (anterior == '1') {
					b += '0';
					anterior = '0';
				} else {
					b += '1';
					anterior = '1';
				}
			} else if (a[i] == '1') {
				if (anterior == '2') {
					b += '0';
					anterior = '1';
				} else {
					b += '1';
					anterior = '2';
				}
			}

		}
		cout << b << nl;
		
	}

        return 0;
}

