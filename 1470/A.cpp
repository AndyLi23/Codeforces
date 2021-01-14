

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

long long T, N, M, k[300000], c[300000], s, j;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> T;
    
    FOR(t, T) {
        cin>>N>>M;s=0;j=0;
        FOR(i, N) {
            cin >> k[i];
        }
        FOR(i, M) {
            cin >> c[i];
        }
        sort(k, k+N, greater<int>());
        FOR(i, N) {
            if(j<=k[i]-1){
                s += c[j];
                j++;
            } else {
                s += c[k[i]-1];
            }
        }
        cout << s << endl;
        
    }
}