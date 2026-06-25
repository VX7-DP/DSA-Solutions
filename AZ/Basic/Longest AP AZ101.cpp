#include <bits/stdc++.h>
using namespace std;

void func(){
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=2,cnt=2,diff=arr[1]-arr[0];
    for(int i=2;i<n;i++){
    if(arr[i]-arr[i-1]==diff){
        cnt++;
    }else
    {
        cnt=2;
        diff=arr[i]-arr[i-1];
    }
    mx=max(mx,cnt);
    }    
    cout<<mx<<'\n';
}

signed main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	int test_case=1;
	cin>>test_case;
	while(test_case--)
	func();
}