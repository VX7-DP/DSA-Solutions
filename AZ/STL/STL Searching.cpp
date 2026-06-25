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
    int n,q;    cin>>n>>q;
    int a[n];

    for(int i=0; i<n; ++i){
        cin>>a[i];
    }

    sort(a, a+n);

    while(q--){
        int t,x;    cin>>t>>x;
        if(t==1){
            int idx= lower_bound(a, a+n, x)- a;
            if(idx==n)  cout<<"-1 ";
            else    cout<<a[idx]<<" ";
        }
        else if(t==2){
            int idx= upper_bound(a, a+n, x)- a;
                if(idx==n)   cout<<"-1 ";
                else cout<<a[idx]<<" ";
        }
        else if(t==3){
            auto idx= upper_bound(a, a+n, x)- a;
                cout<<idx<<" ";
            
        }
        else if(t==4){
            auto idx= lower_bound(a, a+n, x)- a;
            cout<<idx<<" ";
        }
        else    cout<<"-1 ";
        
    }
    cout<<"\n";
}

signed main()
{

    ios_base::sync_with_stdio(0);cin.tie(0);

    ll tt = 1;
    cin>>tt;
    while(tt--)
        solve();

    return 0;
}