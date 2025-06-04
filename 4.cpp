#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=1,a1,a2;
    cin>>n;
    float a[n] ;
    for(int i=0 ; i<n ; i++){
        cin>> a[i] ;
    }
    sort(a,a+n);
    cout<<a[1]<<endl;

}
