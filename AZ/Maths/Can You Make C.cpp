#include <bits/stdc++.h>
using namespace std;

void func(){
	long long a,b,c,x;
    cin>>a>>b>>c;
    x=__gcd(a,b);
    if(c%x==0){
        cout<<"Yes"<<'\n';
    }
    else    cout<<"No"<<'\n';
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