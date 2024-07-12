#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        stack<char>st1,st2;
        for(char i:s){
            if(i=='1'){
                if(!st2.empty()) st2.pop();
                else st1.push(i);
            }
            if(i=='0'){
                if(!st1.empty()) st1.pop();
                else st2.push(i);
            }
        }
        if(st2.size()==0&&st1.size()==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}