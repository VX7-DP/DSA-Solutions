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
	int q,n;
    cin>>q>>n;
    if(q==1){
        bool isSqr=0;
        for(int i=1;i*i<=n;i++){
            if(i*i==n){
                isSqr=1;
            }
        }
        if(isSqr)  cout<<"YES\n";
        else    cout<<"NO\n";
    }
    if(q==2){
        bool isCube=0;
        for(int i=1;i*i*i<=n;i++){
            if(i*i*i==n){
                isCube=1;
            }
        }
        if(isCube)  cout<<"YES\n";
        else    cout<<"NO\n";
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