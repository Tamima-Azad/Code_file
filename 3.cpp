#include<bits/stdc++.h>
using namespace std;
float func(int a){
    return sqrt(a) ;
}
int main()
{
    int n ; cin>> n ;
    while(n){
        cout<< func(n % 10) << endl  ;
        n /= 10 ;
    }
}
