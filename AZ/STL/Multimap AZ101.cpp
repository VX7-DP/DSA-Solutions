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
    multimap <string,int> mp;
    while(q--){
        string s,x;
        int y;
        cin>>s;
        if(s=="add"){
            cin>>x>>y;
            mp.insert(make_pair(x,y));
        }
        else if(s=="erase"){
            cin>>x;
            auto itfind=mp.find(x);
            if(itfind!=mp.end()){
                mp.erase(itfind);
            }
        }
        else if(s=="eraseall"){
            cin>>x;
            if(mp.find(x)!=mp.end()){
                mp.erase(x);
            }
        }
        else if(s=="print"){
            cin>>x;
            auto itfind=mp.find(x);
            if(itfind!=mp.end()){
                cout<<itfind->second<<'\n';
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