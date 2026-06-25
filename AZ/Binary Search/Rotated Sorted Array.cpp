/**
 *    author:  VX7(Sumit Chaudhury)
**/

#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100100];

int check(int mid){
    if(arr[mid]<=arr[n-1]) return 1;
    else    return 0;
}

void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo=0, hi=n-1, ans=-1;
    while(lo<=hi){
        int mid= lo + (hi-lo)/2;
        if(check(mid)==1){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<ans<<'\n';
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