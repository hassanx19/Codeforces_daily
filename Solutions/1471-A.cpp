#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n , x , mini = 0 , maxi = 0;
        cin>>n>>x;
        vector<ll> a(n);
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
            mini = mini + a[i];
            if(a[i]%x==0) maxi = maxi + (a[i]/x);
            else  maxi = maxi + (a[i]/x) + 1;
        }
        if(mini%x==0) mini = mini/x;
        else mini = (mini/x) + 1;
        cout<<mini<<" "<<maxi<<'\n';
    }
     
    return 0;
}
