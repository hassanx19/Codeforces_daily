#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   while(t--){
    int n ;
    cin>>n;
    int x = 0 , rounds;
    int a = n;
    while ( a!= 0){
        a = a / 10;
        x++;
    }
    rounds = 9*(x-1) + n / pow(10 , x-1);
    cout<<rounds<<endl;
   }
    return 0;
}
 