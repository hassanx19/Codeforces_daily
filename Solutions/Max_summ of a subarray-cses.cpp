#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
#define F first
#define S second
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define loop(x) for(int i = 0 ; i < n ; i++)
#define nl '\n'
/*
Sliding window to find the max of the subarray
*/
int main() {
    FASTIO;
    int n, i=0 , j=0;
    cin>>n;
    vll x(n);
    loop(n) cin>>x[i];
    ll sum = x[0] , maxi = x[0];
    while(i<n && j<n){
        if(sum>0){
            maxi = max(maxi,sum);
            j++;
            sum+=x[j];
        }else{
            maxi = max(maxi,sum);
            i=j+1;
            j=i;
            sum = x[j];
        }
    }
    cout<<maxi<<nl;
    return 0;
}

