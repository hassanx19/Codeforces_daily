#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
/*
 
*/
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n , x , y , z , time , p , q;
        cin>>n>>x>>y>>z;
        if(n%x==0)  p = n/x;
        else  p = (n/x) + 1;
        if(z<p){
            q = (n - z*x) / (x + 10*y);
            if((n - z*x) % (x + 10*y) ==0) time = z + q;
            else time = z + q + 1;
        }else {
            if(n%(x+y)==0) time = n / (x+y);
            else time =( n / (x+y)) + 1;
        }
        if(n%(x+y)==0) time = min(time , n / (x+y));
        else time =min(time , (n / (x+y)) + 1);
 
        cout<<time<<'\n';
    }
    
    return 0;
}
