#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
    cin>>n;
    int arr[n],xoor=0;
    for(auto &x: arr){
        cin >> x;
        xoor ^= x;
    }
    cout<<xoor<<'\n';
}

signed main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int t;cin>>t;while(t--)
	solve();
}