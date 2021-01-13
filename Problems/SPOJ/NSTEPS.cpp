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

//The numbers increase by 1 and 3 alternally
//1 -> 4 -> 5 -> 8...
//2 -> 3 -> 6 -> 7...
//Calculate all the numbers in the range of [0,10000]
//and answer the queries in O(1).

#define maxn 10009

int numeros[maxn][maxn];
int n;

int main() {
        NeedForSpeed

	memset(numeros, -1, sizeof(numeros));

	numeros[0][0] = 0;
	numeros[1][1] = 1;
	numeros[2][0] = 2;

	bool alt = true;

	int x1 = 1;
	int x2 = 2;
	int y1 = 1;
	int y2 = 0;

	while(true) {
		x1++;
		x2++;
		y1++;
		y2++;

		if (alt) {
			numeros[x1][y1] = numeros[x1-1][y1-1] + 3;
			numeros[x2][y2] = numeros[x2 - 1][y2 - 1] + 1;
			alt = false;
		} else {
			numeros[x1][y1] = numeros[x1 - 1][y1 - 1] + 1;
			numeros[x2][y2] = numeros[x2 - 1][y2 - 1] + 3;
			alt = true;
		}

		if (numeros[x1][y1] > 10000 || numeros[x2][y2] > 10000) {
			break;
		}

	}

	cin >> n;
	int x,y;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		if (numeros[x][y] == -1) {
			cout << "No Number" << nl;
		} else {
			cout << numeros[x][y] << nl;
		}


	}

        return 0;
}

