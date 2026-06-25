#include <bits/stdc++.h>
using namespace std;

void func(){
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans=arr[0];
    for(int i=0;i<n;i++)
        ans=__gcd(arr[i],ans);
    if(ans>=2)  cout<<"Yes\n";
    else    cout<<"No\n";
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