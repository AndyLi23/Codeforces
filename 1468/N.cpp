

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

int T, c1, c2, c3, a1,a2,a3,a4,a5;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> T;
    
    FOR(i, T) {
        cin >> c1 >> c2 >> c3;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        
        c1 -= a1;c2 -= a2;c3 -= a3;
        if(c1<0||c2<0||c3<0){
            cout << "NO" << endl;
        }else{
            a4=max(0,a4-c1);
            a5=max(0,a5-c2);
            if(a4+a5 <= c3){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
}