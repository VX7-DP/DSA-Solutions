#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define rep(i, a, n) for(int i = a; i < n; ++i)
#define all(x) (x).begin(), (x).end()

typedef double db;


void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n);

    for(ll i=0; i<n; ++i){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    for(ll i=1; i<n; ++i){
        a[i] += a[i-1];
    }

    for(ll i=0; i<q; ++i){
        ll m;  cin>>m;

        ll idx= upper_bound(a.begin(),a.end(), m) - a.begin();
        cout<<idx<<"\n";
    }

}

signed main()
{

    ios_base::sync_with_stdio(0);cin.tie(0);

    ll tt = 1;
    // cin>>tt;
    while(tt--)
        solve();

    return 0;
}