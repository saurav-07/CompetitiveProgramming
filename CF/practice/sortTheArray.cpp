#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define PI 3.1415926535897932384626
#define ll long long int
#define endl "\n"

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}

ll mpow(ll base, ll exp); 

const int mod = 1'000'000'007;
const int N = 1e5+5, M = N;

vector<int> g[N];
ll a[N], b[N];

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void solve(){
	ll i, j, n, L=-1, R=-1, cnt=0;
	cin >> n;

	for(i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	map<ll, ll> mp;
	sort(b, b + n);
	for(i = 0; i < n; i++)
		mp[b[i]] = i;

	for(i = 0; i < n; i++)
		a[i] = mp[a[i]];

	for(i = 0; i < n; i++)
		if(a[i] != i){
			L = i;
			break;
		}

	for(i = n - 1; i >= 0; i--)
		if(a[i] != i){
			R = i;
			break;
		}

	if (L == -1 || R == -1){
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	}
	else{
		reverse(a + L, a + R + 1);
		bool ok = true;
		for(i = 0; i < n; i++)
			if (a[i] != i)
				ok = false;
		
		if(ok){
			cout << "yes" << endl;
			cout << L + 1 << " " << R + 1 << endl;
		}
		else
			cout << "no" << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());

	/*
	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin); 
		freopen("output.txt", "w", stdout); 
	#endif 
	*/

	int t = 1;
//	cin >> t;
	while(t--){
		solve();
	}

	return 0;
}

ll mpow(ll base, ll exp) {
	base %= mod;
	ll result = 1;
	while (exp > 0) {
		if (exp & 1) result = ((ll)result * base) % mod;
		base = ((ll)base * base) % mod;
		exp >>= 1;
	}
	return result;
}

