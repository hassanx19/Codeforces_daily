#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*

*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll a , b , x , steps = 0 , diff , mini;
    cin>>a>>b>>x;
    diff = abs(a-b);
    mini = diff;
    while(diff>=2){
        if(a>b){
            a/=x;
            steps++;
        }else{
            b/=x;
            steps++;
        }
        diff = abs(a-b);
        if(diff==2){
            if(b/x==a || a/x==b){
            diff = 0;
            steps++;
            }
        }
        mini = min(mini , diff+steps);
    }
    cout<<mini<<'\n';
    }
    return 0;
}
