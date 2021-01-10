#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))
    
long long N, T, temp, a,b;
bool isa;
multiset<long long> e,o;
    
    
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> N;
    
    FOR(i, N) {
        e.clear();o.clear();a=0;b=0;cin >> T;isa=true;
        
        FOR(i, T) {
            cin >> temp;
            if(temp%2==0){e.insert(temp);} else {o.insert(temp);}
        }
        FOR(i, T) {
            //cout << o.size() << " " << e.size() << endl;
            if(isa){
                if(e.size()==0 || (o.size()!=0 && *e.rbegin()<*o.rbegin())){
                    o.erase(--o.end());
                }else if(o.size()==0 || *e.rbegin()>=*o.rbegin()){
                    a += *e.rbegin();
                    e.erase(--e.end());
                }
            } else {
                if(e.size()==0 || ( o.size()!=0 && *e.rbegin()<*o.rbegin())){
                    b += *o.rbegin();
                    o.erase(--o.end());
                }else if(o.size()==0 || *e.rbegin()>=*o.rbegin()){
                    e.erase(--e.end());
                }
            }
            isa = !isa;
        }
        if(a>b){
            cout << "Alice" << endl;
        } else if (a==b){
            cout << "Tie" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
}