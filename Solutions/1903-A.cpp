#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    int n , k ;
    cin>>n>>k;
    vector<int> a(n);
    for ( int j = 0 ; j<n ; j++){
        cin>>a[j];
    }
    bool flag = false;
    for ( int i = 0 ; i < n-1; i++){
        if (a[i]<=a[i+1] || k>1 ){
            flag = true;
        } else {
           flag = false;
           break;
        }
    }
    if( flag==true || n==1 ){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
   }
 
    return 0;
}
