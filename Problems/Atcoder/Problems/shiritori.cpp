
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
set<string> qtd;
string palavras[150];

//Use a set to count the number of not repeated words
//Use an array to store the words the compare the letters
//Do as the comparison as the statement says

int main() {
        NeedForSpeed

	cin >> n;

	string nome;

	for (int i = 0; i < n; i++) {
		cin >> nome;
		qtd.insert(nome);
		palavras[i] = nome;
	}

	if (sz(qtd) != n) {
		cout << "No" << nl;
		exit(0);
	} else {
		for (int i = 1; i < n; i++) {
			int t = sz(palavras[i - 1]);
			char L1 = palavras[i][0];
			char L2 = palavras[i - 1][t - 1];

			if (L1 != L2) {
				cout << "No" << nl;
				exit(0);
			} 
		}
	}

	cout << "Yes" << nl;



        return 0;
}

