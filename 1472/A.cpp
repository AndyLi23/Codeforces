#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))
    
int N, x, y, z;
    
int helper(int t) {
    int a=0;
    while(t%2==0){
        a++;
        t/=2;
    }
    return a;
}
    
int b2(int i) {
    int a = 1;
    FOR(o, i) {
        a *= 2;
    }
    return a;
}
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> N;
    
    FOR(i, N) {
        cin >> x >> y >> z;
        if(b2(helper(x)+helper(y))>=z){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}