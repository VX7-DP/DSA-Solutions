#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
    cin>>s;
    int ans=0;
        for(char digit: s){
            ans+= (digit - '0');
        }
    cout<<ans<<'\n';
}

signed main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int t;cin>>t;while(t--)
	solve();
}