#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss; cin>>s>>ss;
    int k=s.length();
    for(int i=0;i<ss.size();i++){
        s[k]=s[i];
        k++;
    }
    cout<<s<<" "<<ss<<endl;
}
