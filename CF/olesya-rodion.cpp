#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

void solve() {
  unsigned long long dig, div, i, val=1;
  cin>>dig>>div;
  if(dig==1 && div==10){
      cout<<-1<<endl;
      return;
  }
  else if(div==10){
      cout<<1;
      fo(i, dig-1)
        cout<<0;
      cout<<endl;
      return;
  }
  fo(i, dig){
      cout<<div;
  }
  cout<<endl;
}

int main() {
    //int t = 1;
    //cin >> t;
    //while(t--) {
      solve();
    //}

    return 0;
}
