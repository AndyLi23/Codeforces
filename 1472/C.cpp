#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))
    
int N, T, arr[200000], m;
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> N;
    
    FOR(i, N) {
        cin >> T;
        m = 0;
        FOR(i, T) {
            cin >> arr[i];
        }
        FOR2R(i, T-1, 0) {
            if(i+arr[i] < T) {
                arr[i] += arr[arr[i]+i];
            }
            m = max(m, arr[i]);
        }
        cout << m << endl;
    }
}