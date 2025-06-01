#include<bits/stdc++.h>
using namespace std;
int main()
{
    //remove middle
    vector<float>aa={1.1,4.5,2.5,6.3,2.3,4.8,3.6,7.2};
    int l,r;
    cin>>l>>r;
    aa.erase(aa.begin() + l-1,aa.begin()+r);
    for(int i=0;i<aa.size();i++){
        cout<<aa[i]<<" ";
    }
    cout<<endl;

//erase very costly and timeconsuming;
//vector limitation
//erase do program slow
}
