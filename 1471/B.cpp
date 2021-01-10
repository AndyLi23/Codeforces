

#include <bits/stdc++.h>
    
using namespace std;
    
#define FOR(i, n) for(int (i) = 0 ; (i) < (n); ++(i))
#define FOR2(i, a, b) for(int (i) = (a); (i) < (b); ++(i))
#define FOR2R(i, b, a) for(int (i) = (b); (i) >= (a); --(i))

long long T, N, X, cur, s;
pair<long long,long long>temp;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);cin >> T;
    
    FOR(i, T) {
        cin>>N>>X; s=0;queue<pair<long long, long long> > q;
        FOR(i, N){
            cin>>cur;
            q.push(make_pair(cur, 1));
        }
        while(!q.empty()) {
            temp=q.front();q.pop();s+=temp.first*temp.second;
            if(temp.first%X!=0){
                break;
            }else{
                q.push(make_pair(temp.first/X, X*temp.second));
            }
        }
        while(!q.empty()){
            temp=q.front();q.pop();s+=temp.first*temp.second;
        }
        cout<<s<<endl;
       
    }
}