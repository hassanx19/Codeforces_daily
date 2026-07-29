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
In this problem , if a[j]>=l && a[j]<=r then we can single out that card to maximise the amount of cards chosen.
if a[j]>r then we cannot choose that card or any other card coming before or after it as a[j]>0 so the sum would always be > r
if a[j]<r then we would have to continue to pick up the minimum cards such that it would lie between l and r --> if the sum lies
btween l and r then we would increment the round else we would decrease our window size.
*/
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    ll n , l , r , rounds = 0 , i = 0 , sum , j=0;
    cin>>n>>l>>r;
    vll a(n); 
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    sum = a[0];
    while(i<n&&j<n){
        if(sum>r){
            sum-=a[i];
            i++;
        }else if(sum>=l && sum<=r){
            rounds+=1;
            i = j+1;
            j = i;
            if(i<n) sum = a[i];
        }else if(sum<l){
            j++;
            sum+=a[j];
        }
    }
    cout<<rounds<<'\n';
    }
    return 0;
}