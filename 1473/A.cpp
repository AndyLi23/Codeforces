

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

int T, N, D, temp;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> T;
    FOR(t, T) {
        cin >> N >> D;
        int m1 = 1000, m2 = 1000;
        bool a = false;
        FOR(i, N) {
            cin >> temp;
            if(temp > D) {
                a = true;
            }
            
            if(temp < m1) {
                m2 = m1;
                m1 = temp;
            } else if (temp < m2) {
                m2 = temp;
            }
            
        }
        
        if(!a || m1+m2 <= D) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
}