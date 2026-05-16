#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    int n , k , x ;
    cin>> n >> k >> x;
    int m;
  if ( x == 1 && k >=3 ){
    cout<<"YES"<<endl;
    m = n / 2;
    cout<<m<<endl;
    if ( n%2==0 ){
      for(int i = 1 ; i<=m ; i++){
        cout<<2<<" ";
      }
      cout<<endl;
    } else {
      for(int i = 1 ; i < m ; i++){
        cout<<2<<" ";
      }
      cout<<3<<endl;
    }
  }else if ( k==2 && x==1){
    if ( n%2==0 ){
      cout<<"YES"<<endl;
    m = n / 2;
    cout<<m<<endl;
      for(int i = 1 ; i<=m ; i++){
        cout<<2<<" ";
      }
      cout<<endl;
    } else {
      cout<<"NO"<<endl;
    }
 
  }
   else if (x!=1 && k!=1){
    cout<<"YES"<<endl;
    m = n ;
    cout<<m<<endl;
    for(int i = 1 ; i <=m ; i++){
      cout<<1<<" ";
    }
    cout<<endl;
  } else {
    cout<<"NO"<<endl;
  }
}
    return 0;
}
