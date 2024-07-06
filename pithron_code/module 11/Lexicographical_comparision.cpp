#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin>>s>>ss;
    int i=0;
    while(1)
    {
        if(s[i]=='\0'&&ss[i]=='\0'){
            cout<<"same"<<endl;
            break;
        }
        else if(s[i]=='\0'){
            cout<<"A small"<<endl;
            break;
        }
        else if(ss[i]=='\0'){
            cout<<"B small"<<endl;
            break;
        }
        if(s[i]==ss[i]){
            i++;
        }
        else if(s[i]<ss[i]){
            cout<<"A small"<<endl;
            break;
        }
        else {
            cout<<"B small"<<endl;
            break;
        }
    }
    return 0;
}
