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
        int n;
        cin>>n;
        vi a(4*n , 0);
        int sti = 0 , i = sti , p = 4*n , nog = n , diff = nog + 1 , cnt = 0;
        while(p){
            if(a[i]==0){
                a[i]=n;
                i+=diff;
                cnt++;
                p--;
            }
            diff--;
            if(cnt==4){
                diff = nog + 1;
                n--;
                cnt = 0;
                sti++;
                i = sti;
            }
            if(p<4) break;
        }
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i]==0) a[i] = 1;
            cout<<a[i]<<" ";
        }
        cout<<'\n';
 
 
    }
    return 0;
}
