/**
 *    author:  VX7(Sumit Chaudhury)
**/

#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;

#define pb push_back
#define fi first
#define se second
#define rep(i,a,n) for (int i=a;i<n;i++)
#define all(x) (x).begin(),(x).end()

typedef double db;

void solve(){
	int n,m;
    cin>>n>>m;
    map <int,bool> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]=1;
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(mp.count(x)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
            mp[x]=1;
        }
    }
    
}

signed main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
    
	int tt=1;
	cin>>tt;
	while(tt--)
	solve();

	return 0;
}