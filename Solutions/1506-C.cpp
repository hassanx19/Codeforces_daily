#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
/*
Since the length of the strings is <=20 so we can have a brute force solution to find the longest common substring: which is by
iterating over the string a with some start index = st_index at the first element which whill cover the entire a and there is a
pointer i which will start with st-index and j which will iterate over j and search for common elements between a and b and if there
is a common character then both i and j will increase and we will update the maximum length and if at some point the element is not common
then we send our iterator i to st_index and j to j+1-count because we already  have (lenght = count) elements in common before the character is not 
same so there is no point of searching beyond j. this way we can find the length of the longest substring.
*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    string a , b;
    cin>>a>>b;
    int st_index = 0 , maxi = 0;
    while(st_index<a.size()){
        int i = st_index , j = 0 , count = 0;
        while(j<b.size() && i<a.size()){
            if(a[i]==b[j]){
                count++;
                i++;
                j++;
                maxi = max(maxi , count);
            }else{
                i=st_index;
                j = j+1-count;
                count = 0;
            }
        }
        st_index++;
    }
    cout<<(a.size()+b.size()-2*maxi)<<'\n';
    }
    return 0;
}
