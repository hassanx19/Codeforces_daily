#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef unsigned long long ull;
const long long MOD = 1e9 + 7;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
/*
 
*/
 
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    int n , cnt1 = 0 , cnt2 = 0;
    cin>>n; bool flag1 = false , flag2 = false;
    vi a(n);
    for(int i = 0 ; i<n ; i++) cin>>a[i];
    for(int i =0 ; i < n ; i++){
        if(a[i]!=1) cnt1++;
        else cnt1--;
 
        if(cnt1<=0){
            cnt2=0;
            for(int j = i+1; j < n-1 ; j++){
                if(a[j]==3) cnt2--;
                else cnt2++;
                if(cnt2>=0){
                    flag2 = true;
                    break;
                }
            }
        }
        if(flag2){
            flag1 = true;
            break;
        }
    }
    if(flag1&&flag2) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    }
    return 0;
}