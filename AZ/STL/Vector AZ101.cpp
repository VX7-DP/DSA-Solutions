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
	vi v;
	int q;
	cin>>q;
	while(q--){
		string op;
		cin>>op;
		if(op=="add"){
			int x=0;
			cin>>x;
			v.pb(x);
		}
		else if(op=="remove"){
			if(!v.empty())  v.pop_back();
		}
		else if(op=="print"){
			int x=0;
			cin>>x;
			if(x<v.size())  cout<<v[x]<<'\n';
            else cout<<"0\n";
		}
		else if(op=="clear"){
			v.clear();
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