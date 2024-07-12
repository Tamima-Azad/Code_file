#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        queue<char>qe;
         for(char i:s){
            if(i=='0'){
                 qe.push(i);
            }
           else if(i=='1'){
                if(qe.empty()==false &&qe.front()=='0') qe.pop();
                else qe.push(i);
            }
        }
        if(qe.size()==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;    
}