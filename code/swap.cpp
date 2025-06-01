#include<bits/stdc++.h>
using namespace std;
void swap(int &a , int &b)
{
   a=a+b;
   b=a-b;
   a=a-b;
    return;
}
void Swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main()
{
    int a , b;
    cin>>a>>b;
    Swap(&a,&b);
     cout<<a<<" "<< b <<endl;
    swap(a,b);
    cout<<a<<" "<< b <<endl;
}
