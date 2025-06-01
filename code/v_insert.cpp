#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>basket;
    vector<float>aa={1.1,4.5,2.5,6.3,2.3,4.8,3.6,7.2};
    //we want to insert 1.9 before the 2nd index
    cout<<basket.empty()<<endl;
    cout<<aa.empty()<<endl;
    aa.insert(aa.begin()+2,1.9);
    for(int i=0;i<aa.size();i++){
        cout<<aa[i]<<", ";
    }
    cout<<endl;
    cout<<aa.back()<<endl;
    cout<<aa.front()<<endl;
    //front() and back() don't return pointer
    //they return actual value
    //begin() and end() return pointer
}
