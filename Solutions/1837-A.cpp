#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    int x , k ;
    cin>> x >> k;
    int  p_1 , p_2 ;
    if ( x % k != 0 ){
        cout<<1<<endl;
        cout<<x<<endl;
    } else {
        cout<< 2 <<endl;
        cout<< (k+1) << " " << x - (k+1) << endl;
    }
}
    return 0;
}
