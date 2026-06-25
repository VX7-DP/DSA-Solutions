#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

int main() { 
    int t; cin >> t;

    string s;
    getline(cin, s); 
    while (t--) {
        getline(cin, s);
        
        string x, y, z;
        bool doub = 0; 
        bool dot = 0;  
        for (int i = 0; i < s.size(); ++i) {
            if(s[i] == ' ') { 
                doub = 1;
            }
            else if(s[i] == '.') {
                dot = 1;
            }
            else if(!doub) {
                x += s[i];
            }
            else if(!dot) {	
                y += s[i];
            }
            else { 
                z += s[i];
            }
        }
        int x1 = stoll(x), y1 = stoll(y), z1 = stoll(z); 
        z1 += x1; 
        y1 += x1;
        cout << z1 << "." << y1 << "\n";
    } 
    return 0;
}