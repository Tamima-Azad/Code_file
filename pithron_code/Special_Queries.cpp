#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    queue<string>q;
    while(n--){
        //string s;getline(cin,s);
        char no;cin>>no;
        if(no=='0'){
            string name;cin>>name;
            q.push(name);
        }
        else if(no=='1'&&q.empty()==false){
                cout<<q.front()<<endl;
                q.pop();
        }
        else cout<<"Invalid"<<endl;
    }
    return 0;   
 
}