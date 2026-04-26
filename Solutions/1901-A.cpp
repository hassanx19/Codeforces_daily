#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    int n , x ;
    cin>>n>>x;
    vector<int> a(n);
    for ( int j = 0 ; j<n ; j++){
        cin>>a[j];
    }
    int maxi , next;
    if ( n > 1 ){
        maxi = a[1] - a[0];
        for ( int i = 1 ; i < n-1 ; i++ ){ 
       
        next = a[i+1] - a[i];
        maxi = max( maxi , next );
    }
    }
    else {
        maxi = a[0];
    }
    int max2 = max( maxi , 2*(x - a[n-1]));
    int min = max(max2 , a[0]);
        cout<<min<<endl;
   }
 
    return 0;
}
