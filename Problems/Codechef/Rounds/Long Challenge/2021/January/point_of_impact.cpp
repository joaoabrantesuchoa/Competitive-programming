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

struct points {
	int x;
	int y;

};

points arr[5];
int n,k,x,y;

int main() {
        NeedForSpeed
	
	int t;
	cin >> t;

	while(t--) {
		cin >> n >> k >> x >> y;

		if (x == y) cout << n << " " << n << nl; 

		else {
			if (x < y) {
				arr[0].x = x + n - y;
				arr[0].y = n;

				arr[1].x = n;
				arr[1].y = n - y + x;

				arr[2].x = y - x;
				arr[2].y = 0;

				arr[3].x = 0;
				arr[3].y = y - x;
			} else {
				arr[0].x = n;
				arr[0].y = y + n - x;

				arr[1].x = y + n - x;
				arr[1].y = n;

				arr[2].x = 0;
				arr[2].y = x- y;

				arr[3].x = x - y;
				arr[3].y = 0;
			}

			k = (k - 1) % 4;

			cout << arr[k].x << " " << arr[k].y << nl;
		}

	}

        return 0;
}

