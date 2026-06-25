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
    set<int> st;
    while(q--){
        string s;
        cin>>s;
        if(s=="add"){
            int x;
            cin>>x;
            st.insert(x);
        }
        else if(s=="erase"){
            int x;
            cin>>x;
            if(!st.empty()){
            st.erase(x);
            }
        }
        else if(s=="find"){
            int x;
            cin>>x;
            if(st.find(x)!=st.end()){
                cout<<"YES\n";
            }
            else    cout<<"NO\n";
        }
        else if(s=="print"){
            if(!st.empty()){
                for(auto y : st){
                    cout<<y<<" ";
                }
                cout<<'\n';
            }
        }
        else if(s=="empty"){
            if(!st.empty()){
                st.clear();
            }
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