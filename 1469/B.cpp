

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

int T, N, M, n ,m, temp, nm, mm;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> T;
    
    FOR(i, T) {
        cin>>N;n=0;m=0;temp=0;nm=0;mm=0;
        FOR(i, N){
            cin>>temp;
            n+=temp;
            nm=max(nm, n);
        }
        cin>>M;
        FOR(i, M){
            cin>>temp;
            m+=temp;
            mm=max(mm, m);
        }
        cout<<max(0, max(mm, max(nm, mm+nm))) << endl;
    }
}