#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int j = 1;
    while(j<n){
        for ( int i = 0 ; i < n-j ; i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
        j++;
    }
    int mini = a[0];
    int maxi = a[0];
    int p , q;
    for(int i = 1 ; i < n ; i++){
        if(a[i]<mini){
            mini = min(mini , a[i]);
            p = i;
        } else {
            maxi = max(maxi, a[i]);
            q = i;
        }
    }
    if(mini==maxi){
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
        cout<<maxi<<" ";
        for(int i = 0 ; i < n-1 ; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
   }
    return 0;
}