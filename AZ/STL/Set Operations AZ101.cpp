/**
 *    author:  VX7(Sumit Chaudhury)
**/

#include <bits/stdc++.h>
using namespace std;

using ll=long long;

void solve(){
	int n,m;
    cin>>n>>m;
    set <int> uni,inter,diff,inters;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        uni.insert(x);
        inter.insert(x);
        diff.insert(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        uni.insert(x);
        if(inter.find(x) != inter.end()){
            inters.insert(x);
        }
        if(diff.find(x) != diff.end()){
            diff.erase(x);
        }
    }
    for(int i:uni){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(int i:inters){
        cout<<i<<" ";
    }
    cout<<"\n";
    for(int i:diff){
        cout<<i<<" ";
    }
    cout<<"\n";
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