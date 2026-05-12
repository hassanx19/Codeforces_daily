#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n , m , count = 0;
        cin>>n>>m;
        string x , s;
        cin>>x>>s;
        bool flag = false;
        for (int i = 0; i <= 6; i++) {
        if (x.find(s) != string::npos) {
            flag = true;
            count = i;
            break;
        }
        x += x; // Double the string
    }
        if(flag==true) cout<<count<<'\n';
        else cout<<-1<<'\n';
    }
 
 
    return 0;
}
