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
We can two stack to solve this problem - one main stack to store all the elements from the top to bottom of a[i] , this wasy
it is easier to track the first occurence of the element. We will search for t[j] in the main stack and store all the unnecessary 
elements in the temp. stack (tst) maintaining the same order. We will keep a count of the no. of elements removed - to get the 
index of t[j] in the main stack and then again fill the main stack with all the elements of the temp. stack in the same order with
the element t[j] on top of the stack.
*/
int main() {
    FASTIO;
    // int t;
    // cin>>t;
    // while(t--){
    
    // }
    int n , q , cnt;
    cin>>n>>q;
    vi a(n),t(q),b;
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    stack<int> st,tst;
    for(int i = n-1 ; i>=0 ; i--) st.push(a[i]);
    for(int j = 0 ; j < q ; j++){
        cin>>t[j];
        cnt = 0;
        while(st.top()!=t[j]){
            tst.push(st.top());
            st.pop();
            cnt++;
        }
        b.push_back(cnt+1);
        st.pop();
        while(!tst.empty()){
            st.push(tst.top());
            tst.pop();
        }
            st.push(t[j]);
    }
    for(auto it : b) cout<<it<<" ";
    cout<<nl;
    return 0;
}
