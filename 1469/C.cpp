

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

long long T, N, K, cur, pmin, pmax, cmin, cmax;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> T;
    
    FOR(t, T) {
        cin>>N>>K;
        bool good = true;
        //cout << N << K << endl;
        FOR(i, N){
            cin>>cur;
            if(i == 0){
                pmin = cur;
                pmax = cur;
            } else {
                cmin = max(cur, pmin-K+1);
                cmax = min(cur+K-1, pmax+K-1);
                pmax=cmax;
                pmin=cmin;
                
                if(good && (pmax < pmin || (i == N-1 && pmin > cur))) {
                    cout << "NO" << endl;
                    good = false;
                }
            }
            
            //cout << pmin << " " << pmax << endl;
        }
        if(good){
            cout << "YES" << endl;
        }
        
        //cout << endl;
        
    }
}