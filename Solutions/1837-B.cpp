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
        int n , k ;
        cin>>n>>k;
        vi a(n);
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int count = 0 , maxi = 0;
        for(int i = 0 ; i < n-1 ; i++){
            if(abs(a[i]-a[i+1])<=k) count++;
            else count = 0;
 
            maxi = max(maxi , count);
        }
        cout<<n-(maxi+1)<<endl;
    }
    return 0;
}
