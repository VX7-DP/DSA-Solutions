#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m,p;
    cin>>n>>m>>p;
    int arr[n][m],brr[m][p];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cin>>brr[i][j];
        }
    }
    int carr[n][p];
    for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
        carr[i][j]=0;
        for(int k=0;k<m;k++){
            carr[i][j]+=arr[i][k]*brr[k][j];
        }
        cout<<carr[i][j]<<" ";
        }
        cout<<'\n';
    }
}

signed main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int t;cin>>t;while(t--)
	solve();
}