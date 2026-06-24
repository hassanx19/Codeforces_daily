using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*
If the element at the ith index is off left - means it is left to its corresponding ith pos then we skip and move on to the next number
and we would select only those  number which is either at its corresponding ith pos or if off right to it.
*/
// A comparator function to custom sort a pair:
// bool cmp(pair<int,int> a , pair<int,int> b){
// if(a.first==b.first) return a.second<b.second; // sorted in inc order wrt to second element of the pair
// return a.first>b.first; // sorted in dec order wrt to first element of the pair
// }
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n , count = 0;
    cin>>n;
    vll p(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>p[i];
        if(p[i]<=i+1) count++;
    }
    cout<<count<<'\n';
    }
    return 0;
}
