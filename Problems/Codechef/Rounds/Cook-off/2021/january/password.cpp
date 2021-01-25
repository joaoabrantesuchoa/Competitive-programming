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

int t;
string s;



int main() {
        NeedForSpeed

	cin >> t;

	while(t--) {
		cin >> s;

		bool c1 = false;
		bool c2 = false;
		bool c3 = false;
		bool c4 = false;
		bool c5 = false;

		if (sz(s) >= 10) c5 = true;

		for (int i = 0; i < sz(s); i++) {
			int numeracao_minusculo = (int)s[i];
			int numeracao_maiusculo = (int)s[i];

			//cout << numeracao_minusculo << " " << numeracao_maiusculo << nl;
			if (numeracao_minusculo >= 97 && numeracao_minusculo <= 122) {
				c1 = true;
			}

			if (i != 0 && i != sz(s) - 1) {
				if (numeracao_maiusculo >= 65 && numeracao_maiusculo <= 90) {
					c2 = true;
				}	

				if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
					c3 = true;
					}
				if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?') {
					c4 = true;
				}
			} 
		}
		if (c1 && c2 && c3 && c4 && c5) {
			cout << "YES" << nl;
		} else {
			cout << "NO" << nl;
		}
	}

        return 0;
}

