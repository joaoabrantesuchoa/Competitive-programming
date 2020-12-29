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

int t,n,m;
int r[105], b[105];
int prefix_r[105], prefix_b[105];

int main() {
        NeedForSpeed

        cin >> t;

        while(t--) {
                cin >> n;

                for (int i = 0; i < n; i++) {
                        cin >> r[i];
                        if (i == 0) {
                                prefix_r[i] = r[i];
                        } else {
                                prefix_r[i] = prefix_r[i -1] + r[i];
                        }
                }

                cin >> m;

                for (int i = 0; i < m; i++) {
                        cin >> b[i];

                        if (i == 0) {
                                prefix_b[i] = b[i];
                        } else {
                                prefix_b[i] = prefix_b[i - 1] + b[i];
                        }
                }

                int maior_prefix_b = -1000000;
                int maior_prefix_r = -1000000;

                for (int i = 0; i < n; i++) {
                        maior_prefix_r = max(maior_prefix_r, prefix_r[i]);
                }

                for (int i = 0; i < m; i++) {
                        maior_prefix_b = max(maior_prefix_b, prefix_b[i]);
                }

                int P1 = max(maior_prefix_r,0);
                int P2 = max(maior_prefix_b,0);

                cout << max(P1 + P2,0) << nl;
        }

        return 0;
}

