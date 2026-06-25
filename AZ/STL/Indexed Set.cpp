/**
 *    author:  VX7(Sumit Chaudhury)
**/

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;


void solve(){
	int q;
    cin>>q;
    ordered_set s;
    while(q--){
        string st; 
        int x;
        cin>>st>>x;
        if(st=="add"){
            s.insert(x);
        }
        else if(st=="remove"){
            if(s.find(x)!=s.end()){
                s.erase(s.find(x));
            }
        }
        else if(st=="find"){
            if(x>=s.size()){
                cout<<"-1\n";
            }
            else    cout<<*(s.find_by_order(x))<<"\n";
        }
        else if(st=="findpos"){
            cout<<s.order_of_key(x)<<"\n";
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