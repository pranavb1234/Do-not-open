#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    string f;
    cin >> s >> f;

    int sLen = s.size();
    int fLen = f.size();
    
    if(abs(sLen - fLen) > 1){
        cout << "No" << endl;
    }

    int stS = 0;
    int stF = 0;
    int diff = 0;
    while(stS != sLen || stF != fLen){
        if(s[stS] == f[stF]){
            stF++;
            stF++;
        }else {
            diff++;
            
        }
    }
    return 0;
}
