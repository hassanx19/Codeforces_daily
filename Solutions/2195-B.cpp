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
Every element has to be at its own position and we can freely arrange the ssubsequences : 
a1 a2 a4 a8 ....
a3 a6 a12 ..
a5 a10 a20 a40 .. and so on. If every element is shuffled at these positons in the subsequences then 
we can swap them and sort them. As these elements are forming a G.P. we can divide all the elements by 2 until
they become not divisible by 2 and if they are at some positon such that i%x==0 then that element can be swapped with
the elements of its subsequence and if we are able to get this true for every value of array then we can sort it.
*/

int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    bool flag = true;
    vi a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    for(int i = 0 ; i<n; i++){
        while(a[i]%2==0){
            a[i]/=2;
        }
        if((i+1)%a[i]!=0){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    }
    
    return 0;
}