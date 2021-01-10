

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

long long N, T, X, s, m, temp;

long long getmod(long long i, long long X) {
    if(i % X != 0) {
        return i/X+1;
    }
    return i/X;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> N;
    
    FOR(i, N) {
        cin >> T >> X;
        s = 0;
        m=0;
        FOR(i, T) {
            cin >> temp;
            m += getmod(temp, X);
            s += temp;
            
        }
        cout << getmod(s, X) << " " << m << endl;
        
    }
}