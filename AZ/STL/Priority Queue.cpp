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
	int q;
    cin>>q;    
    priority_queue <int> pql;
    while(q--){
        string s;
        cin>>s;
        if(s=="add"){
            int x;
            cin>>x;
            pql.push(x);
        }
        else if(s=="remove"){
            if(!pql.empty()){
                pql.pop();
            }
        }
        else if(s=="print"){
            if(!pql.empty()){
                cout<<pql.top()<<'\n';
            }
            else    cout<<"0\n";
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