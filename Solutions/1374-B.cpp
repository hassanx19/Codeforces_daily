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
    int n;
    cin>>n;
    int a = 0 , b = 0;
    while(n%2==0){
        n = n / 2;
        a++;
    }
    while(n%3==0){
        n = n / 3;
        b++;
    }
    if (n == 1 && a <= b) {
			cout << 2 * b - a << endl;
		} else {
			cout << -1 << endl;
		}
 
    }
    return 0;
}
