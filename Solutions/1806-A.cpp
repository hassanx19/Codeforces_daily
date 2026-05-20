#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   while(t--){
    int a , b , c , d;
    cin>> a >> b>> c >> d;
    int steps;
    if ( c > a+d-b) {
        cout<<-1<<endl;
    } else if ( d < b+c-a){
        cout<<-1<<endl;
    }
    else if (a>c && b>d){
        cout<<-1<<endl;
    } else {
        steps = a - c + 2*(d-b);
        cout<<steps<<endl;
    }
    
   }
    return 0;
}
