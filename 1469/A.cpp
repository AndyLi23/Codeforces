

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

int T, q, l ,r;
string temp;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> T;
    
    FOR(i, T) {
        cin>>temp;q=0;l=0;r=0;
        bool g=true;
        FOR(i, temp.length()){
            if(temp[i]=='?'){
                q++;
                if(r>0){
                    r--;
                }
            }else if(temp[i]==')'){
                l++;
                if(r<1&&q<1){
                    cout<<"NO"<<endl;
                    g=false;
                    break;
                } else if (r>0){
                    r--;
                }
            }else{
                r++;
            }
        }
        if(g){
            if(r>0 || q%2!=0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
}