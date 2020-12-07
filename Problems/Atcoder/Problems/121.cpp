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

#define nl '\n'
#define INF 1000000000
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define NeedForSpeed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

string a,b,numerotexto;
float numero;

int main() {
        NeedForSpeed

	cin >> a >> b;

	numerotexto = a + b;

	numero = stoi(numerotexto);

	if ( pow(sqrt(numero),2) == numero) {
		cout << "Yes" << nl;
	} else {
		cout << "No" << nl;
	}


        return 0;
}


