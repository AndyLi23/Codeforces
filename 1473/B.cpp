

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

int T;
string s1, s2;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

string duplicate(string s, int n) {
    string x = s;
    FOR(i, n-1) {
        x += s;
    }
    return x;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> T;
    FOR(t, T) {
        cin >> s1 >> s2;
        int l = lcm(s1.length(), s2.length());
        if(duplicate(s1, l/s1.length()) == duplicate(s2, l/s2.length())) {
            cout << duplicate(s1, l/s1.length()) << endl;
        } else {
            cout << -1 << endl;
        }
    }
}