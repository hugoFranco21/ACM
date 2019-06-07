#include <bits/stdc++.h>

#define INF 1000000000
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define FORC(cont, it) for(decltype((cont).begin()) it = (cont).begin(); it != (cont).end(); it++)
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n, res = 0;
	string aux;
	unordered_map<string, int> mapa;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> aux;
		mapa[aux]++;
	}
	for(int i = 0; i < n; i++){
		cin >> aux;
		if(mapa.find(aux) != mapa.end() && mapa[aux] > 0){
			mapa[aux]--;
		} else{
			res++;
		}
	}
	cout << res;
	return 0;
}