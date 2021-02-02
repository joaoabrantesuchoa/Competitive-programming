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

//Como fazer:
//1) Sort the array
//2) Alice should take the maximum number, bob the next and so on.
//3) When alice take a number the global result will increase by x if x is even.
//4) When bob take a number the global result will decrease by x if x is odd.
//5) If global score > 0 --> alice, if global score < 0 --> BoB, if global score == 0 Tie.

ll global_score;
ll arr[200009];
ll n,t;

int main() {
        NeedForSpeed

	cin >> t;

	while(t--) {
		cin >> n;

		for (int i = 0; i < n; i++) cin >> arr[i];

		global_score = 0;

		sort(arr,arr + n, greater<int>());

		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				if (arr[i] % 2 == 0) {
					global_score += arr[i];
				}
			} else if (i % 2 != 0) {
				if (arr[i]  % 2 != 0) {
					global_score -= arr[i];
				}
			}
		}

		if (global_score > 0) cout << "Alice" << nl;
		else if (global_score < 0) cout << "Bob" << nl;
		else cout << "Tie" << nl;
	}

        return 0;
}

