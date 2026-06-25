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
	int q;
    cin>>q;
    deque <int> d;
    while(q--){
        string s;
        cin>>s;
        if(s=="insertback"){
            int x;
            cin>>x;
            d.push_back(x);
        }
        else if(s=="eraseback"){
            if(!d.empty()){
                d.pop_back();
            }
        }
        else if(s=="insertfront"){
            int x;
            cin>>x;
            d.push_front(x);
        }
        else if(s=="erasefront"){
            if(!d.empty()){
                d.pop_front();
            }
        }
        else if(s=="printfront"){
            if(!d.empty()){
                cout<<d.front()<<'\n';
            }
            else    cout<<"0\n";
        }
        else if(s=="printback"){
            if(!d.empty()){
                cout<<d.back()<<'\n';
            }
            else    cout<<"0\n";
        }
        else if(s=="print"){
           int x;
        cin >> x;
        if (x < (int)d.size()) {
          cout << d[x] << "\n";
        } else {
          cout << "0\n";
        }
        }      

    }
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