#include <bits/stdc++.h>
using namespace std;

void func(){
	int q;
    cin>>q;
    multiset<int> st;
    while(q--){
        string s;
        cin>>s;
        if(s=="add"){
            int x;
            cin>>x;
            st.insert(x);
        }
        else if(s=="erase"){
            int x;
            cin>>x;
            auto itfind=st.find(x);
            if(itfind!=st.end()){
                st.erase(itfind);
            }
        }
        else if(s=="eraseall"){
            int x;
            cin>>x;
            if(st.find(x)!=st.end()){
                st.erase(x);
            }
        }
        else if(s=="find"){
            int x;
            cin>>x;
            if(st.find(x)!=st.end()){
                cout<<"YES\n";
            }
            else    cout<<"NO\n";
        }
        else if(s=="count"){
            int x;
            cin>>x;
            cout<<st.count(x)<<"\n";
        }
        else if(s=="print"){
            if(!st.empty()){
                for(auto i : st){
                    cout<<i<<" ";
                }
                cout<<'\n';
            }
        }
        else if(s=="empty"){
            if(!st.empty()){
                st.clear();
            }
        }
    }
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