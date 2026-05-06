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
    cin>> n;
    vector<int> arr(n);
    for(int p = 0 ; p < n ; p++){
    cin>>arr[p];
    }
    bool flag = true;
    int j = 1 ;
    while ( j < n ){
        for ( int i = 1 ; i < n - 1 ; i++ ){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    j++;
    }
    for (int i = 0 ; i < n-1 ; i++){
        if(arr[i]>arr[i+1]){
            cout<<"NO"<<endl;
            flag = false ;
            break;
        }
    }
    if(flag!= false){
        cout<<"YES"<<endl;
    }
    
}
 
    return 0;
}
