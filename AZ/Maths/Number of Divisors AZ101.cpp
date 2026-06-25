#include <bits/stdc++.h>
using namespace std;

void func(){
	int n,count=0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(i!=n/i){
                count++;
            }
        }
    }
    cout<<count<<'\n';
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