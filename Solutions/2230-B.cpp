#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*
used a simple stack to check if there are ones and three's before any 2 later in the string and if that is true
we pop it out and maintain a count of all the elements popped.
If for any 2, the stack is empty that means the number of 1s and 3s in the stack was less the the count of 2's coming after it.
hence we add that count to the operations var and reset the count to zero and then repeat it.
*/
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int count = 0 , operations = 0;
    stack<char> st; 
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]=='1'|| s[i]=='3') st.push(s[i]);
        else if(s[i]=='4') operations++;
        else{
            if(st.empty()){
                operations+=count;
                count=0;
            }else{
                st.pop();
                count++;
            }
        }
    }
    if(count!=0) operations+=count;
    cout<<operations<<'\n';
    }
    return 0;
}
