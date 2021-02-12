#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<int,pii> iii;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef priority_queue<pii, vector<pii>, greater<pii>> priority_queue_easy;
typedef priority_queue<iii, vector<iii>, greater<iii>> priority_queue_grids;
typedef vector<vii> graph_dj;


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
int H[500009];


int main() {
        NeedForSpeed

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> H[i];
	}

	for (int i = n - 1;  i > 0; i--) {
		if (H[i - 1] - H[i] > 1) {
			cout << "No" << nl;
			exit(0);
		} else if (H[i - 1] - 1 == H[i]) {
			H[i - 1] -= 1;
		}
	}

	cout << "Yes" << nl;

        return 0;
}


