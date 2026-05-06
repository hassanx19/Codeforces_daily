#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    int n ; 
    cin >> n ;
    vector <int> a(n);
    for (int k = 0 ; k < n ; k++){
        cin>>a[k];
    }
    int j = 1; 
    while(j<n){  
        for(int i = 0;i<n-j;i++){
            if(a[i]>a[i+1]){
                swap(a[i], a[i+1]);
            }
        }
        j++;
   }
   int c = 0;
   for ( int i = 0 ; i < n ; i++){
    while ( i < n - 1 && a[i]==a[i+1]){
        i++;
    }
    c++;
   }
   int count = 1;
    for ( int i = 0 ; i < n-1; i++){
        if (a[i]!=a[i+1]){
            break;
        } else {
            count++;
        }
    }
    if ( c == 1){
    cout<<"YES"<<endl;
   }
   else if ( c == 2 ){
    if ( count == n/2 || count == n - (n/2)){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
   }
    else {
        cout<<"NO"<<endl;
    }  
 
}
    return 0;
}
