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
string resposta;
string pedaco,palavra;

void descobrir_letra(string code) {
	int l = 0;
	int r = 16;
	int total = 16;

	for (int i = 0; i < 4; i++) {
		if (code[i] == '1') {
			total /= 2;
			l += total;
		}

		if(code[i] == '0') {
			total /= 2;
			r -= total;
		}
	}
	char letra1 = l + 'a';
	char letra2 = r - 1 + 'a';

	if (code[3] == '1') resposta += letra2;
	if (code[3] == '0') resposta += letra1;
}

int main() {
        NeedForSpeed

	cin >> t;

	while(t--) {
		int contador = 0;
		resposta.clear();

		cin >> n;
		cin >> palavra;

		for (int i = 0; i < sz(palavra); i++) {
			pedaco += palavra[i];
			contador++;
					
			if (contador == 4) {
				descobrir_letra(pedaco);
				contador = 0;
				pedaco.clear();
			}
		}

		cout << resposta << nl;
	}

        return 0;
}

