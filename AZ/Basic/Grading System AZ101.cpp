/**
 *    author:  VX7(Sumit Chaudhury)
**/

#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;

#define pb push_back
#define fi first
#define se second
#define rep(i,a,n) for (int i=a;i<n;i++)
#define all(x) (x).begin(),(x).end()

typedef double db;

void solve(){
	int mt,ft,mu;
    cin>>mt>>ft>>mu;
    int mtft=mt+ft;
    if(mt==-1 || ft==-1){
        cout<<"F\n";
    }
    else if(mtft>=80){
        cout<<"A\n";
    }
    else if(mtft>=65 && mtft<80){
        cout<<"B\n";
    }
    else if(mtft>=50 && mtft<65){
        cout<<"C\n";
    }
    else if(mtft>=30 && mtft<50){
        if(mu>=50)  cout<<"C\n";
        else    cout<<"D\n";
    }
    else if(mtft<30)    cout<<"F\n";
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