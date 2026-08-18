#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
#define F first
#define S second
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define cin(v) for(auto &val:v) cin >> val;
#define nl '\n'
typedef unsigned long long ull;
/*
To find the max value of ai+bj+ck , we need to find their max values such that i!=j!=k so we can find the largest three
possible values of a,b&c then for non intersecting positions we can compute the sum and the max of all the sums woulld be
our answer.
*/
int main () {
    FASTIO
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    ll mx = 0, sum = 0;
    vector<pair<int,int>> a(n),b(n),c(n),x,y,z;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    for(int i = 0 ; i < n ; i++){
        cin>>b[i].first;
        b[i].second = i;
    }
    for(int i = 0 ; i < n ; i++){
        cin>>c[i].first;
        c[i].second = i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    for(int i = n-3; i < n ; i++){
        x.push_back({a[i].first,a[i].second});
        y.push_back({b[i].first,b[i].second});
        z.push_back({c[i].first,c[i].second});
    }
    for(int i = 0; i<3 ; i++){
        sum = x[i].first;
        for(int j = 0; j<3 ; j++){
            if(x[i].second!=y[j].second){
                sum+=y[j].first;
            for(int k = 0; k<3 ; k++){
                if(z[k].second!=y[j].second && z[k].second!=x[i].second){
                    sum+=z[k].first;
                    mx = max(mx , sum);
                    sum-=z[k].first;
                }
            }
                sum-=y[j].first;
            }
        }
    }
    cout<<mx<<nl;
    }
    return 0 ;
}