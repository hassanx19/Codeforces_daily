#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9;
#define F first
#define S second
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define loop(x) for(int i = 0 ; i < n ; i++)
#define nl '\n'
/*
Lets say we pick a subarray in <a> where all the elements are unique , then we have to pick some another subarray 
in such a way that the elements in the 2nd subarray should not exceed the max element in the subarray 1 else the 
sum would not be same and if that is the condition then there has to be some duplicate elements and hence we can 
choose those elements as our subarray.
*/
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    map<int,int>mp;
    vi b(n);
    bool flag = false;
    for(int i = 0 ; i < n ; i++){
        cin>>b[i];
        mp[b[i]]++;
        if(mp[b[i]]>1) flag = true;
    }
    if(flag) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    }
    
    return 0;
}
