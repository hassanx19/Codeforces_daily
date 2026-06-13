#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
/*
 
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , maxi = INT16_MIN,mini = INT16_MAX;
        cin>>n;
        vi h(n);
        for(int i = 0 ; i < n ; i++){
            cin>>h[i];
            if(h[i]>=maxi) maxi = h[i];
            if(h[i]<=mini) mini = h[i];
        }
        cout<<maxi-mini+1<<'\n';
 
    }
    return 0;
}
