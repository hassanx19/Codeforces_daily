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
        int n , x , cd = 0;
        cin>>n>>x;
        vi a(n);
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
            if(a[i]) cd++;
        }
        bool flag = false;
        int i = 0 , j = x-1;
        j = min(j , n -1);
            while(j<n){
            int count = 0;
            j = min(j , n -1);
            for(int p = i ; p <= j ; p++)
            if(a[p]) count++;
            if(count==cd){
                flag = true;
                break;
            } else {
                i++;
                j++;
            }
            }
            if(flag) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
    }
    
    return 0;
 
}
