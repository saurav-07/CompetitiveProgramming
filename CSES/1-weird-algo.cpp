#include<bits/stdc++.h>
#include<string>
#include<cstring>
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<unordered_map>
#include<map>
#define all(arr) arr.begin(),arr.end()
#define MOD 1000000007
using namespace std;
typedef long long int ll;

template <typename T>
void input(vector<T> &arr,ll n) {
  T temp;
  for(ll i=0;i<n;i++) cin>>temp, arr.push_back(temp);
}

template <typename T>
void output(vector<T> arr) {
  T temp;
  for(auto x:arr) cout<<x<<" ";
  cout<<endl;
}


template <typename T>
void input_set(set<T> &arr,ll n) {
  T temp;
  for(ll i=0;i<n;i++) cin>>temp, arr.insert(temp);
}


ll power(ll num,ll base) {
  if(base==0)
    return 1;

  if(base%2)
    return (num%MOD*power(num,base-1)%MOD)%MOD;
  else {
    ll x=power(num,base/2);
    x=(x*x)%MOD;
    return x;
  }
}

int main() {
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;
  cin >>n;

  while(n){
    if(n == 1){
      cout<<n<<"\n";
      break;
    }
    else if(n%2 == 0){
      cout<<n<<" ";
      n/=2;
    }
    else{
      cout<<n<<" ";
      n = 3*n +1;
    }
  }

  return 0;
}
