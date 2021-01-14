

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

long long T, a[4];

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> T;
    
    FOR(t, T) {
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        sort(a, a+4);
        cout << a[0]*a[2] << endl;
        
    }
}