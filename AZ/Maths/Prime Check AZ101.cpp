#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==0 || n==1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void func(){
	int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"YES"<<'\n';
    }
    else    
        cout<<"NO"<<'\n';
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