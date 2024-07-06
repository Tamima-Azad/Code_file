#include<bits/stdc++.h>
using namespace std;
int main()
{
    //list<int>mylist;
    //initialize
    //list<int>list2 = {1,2,3,4,5}
    int a[5]={11,22,33,44,55};
    vector<int>v={100,200,300};
    //list<int>mylist(10,5);
    //copy
    //list<int>mylist(list2);
    //list<int>mylist(a,a+5);
    list<int>mylist(v.begin(),v.end());
    cout<<mylist.size()<<endl;
    //cout<<mylist.front()<<endl;
    // for(auto it=mylist.begin();it!=mylist.end();it++){
    //     cout<<*it<<" ";
    // }
    for(auto i:mylist){
        cout<<i<<" ";
    }
    cout<<endl;
    //cout<<mylist.max_size()<<endl;
    //mylist.clear();
   // mylist.resize(2);
    mylist.resize(6);
    cout<<mylist.size()<<endl;
     for(auto i:mylist){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}