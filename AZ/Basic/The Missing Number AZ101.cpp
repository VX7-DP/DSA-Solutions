#include <bits/stdc++.h>
using namespace std;

void func(){
	int n,suma=0,sumb=0,sumc=0;
    cin>>n;
    int arra[n],arrb[n-1],arrc[n-2];
    for(int i=0;i<n;i++){
        cin>>arra[i];
        suma+=arra[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>arrb[i];
        sumb+=arrb[i];
    }
    for(int i=0;i<n-2;i++){
        cin>>arrc[i];
        sumc+=arrc[i];
    }
    cout<<(suma-sumb)<<" "<<(sumb-sumc)<<'\n';
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