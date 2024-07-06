#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>mylist = {10,20,30};
    list<int>l={11,22,33};
    vector<int>v = {111,222,333};
    //last insert
    mylist.push_back(40);
     //head insert
    mylist.push_front(5);
    //head delet
    //mylist.pop_front();
      //last delete
     // mylist.pop_back();
      mylist.insert(next(mylist.begin(),5),50);
      //multiple value insert
      mylist.insert(next(mylist.begin(),3),{100,200,300,400});
      //list insert
      mylist.insert(next(mylist.begin(),3),l.begin(),l.end());
      mylist.insert(next(mylist.begin(),3),v.begin(),v.end());
      mylist.erase(next(mylist.begin(),3));
      mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
      replace(mylist.begin(),mylist.end(),10,100);
    list<int>newlist;
    //newlist=mylist;
    newlist.assign(mylist.begin(),mylist.end());
    for(int i:newlist){
        cout<<i<<" ";
    }
    cout<<endl;
    auto it=find(mylist.begin(),mylist.end(),101);
    if(it == mylist.end()){
        cout<<"not found"<<endl;
    }
    else cout<<"found"<<endl;
   return 0;
    
    
  
}