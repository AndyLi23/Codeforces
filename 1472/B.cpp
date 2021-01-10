#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))
    
int N, T, temp, ones, twos, tar;
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> N;
    
    FOR(i, N) {
        cin >> T;
        ones=0;
        twos=0;
        FOR(j, T) {
            cin >> temp;
            if(temp == 1) {
                ones++;
            } else {
                twos++;
            }
            
        }
        if(ones%2==1){
            cout << "NO" << endl;
        } else {
            tar = (ones + twos*2);
            if(tar%2==0 && ((tar/2)%2 == 0 || ones>1)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}