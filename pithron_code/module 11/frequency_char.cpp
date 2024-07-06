#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt[26]={0};
    for(int i=0;i<s.length();i++){
        int val=s[i]-'a';
        cnt[val]++;
    }
    for(int i=0;i<26;i++){
        //cout<<i+97<<" - "<<cnt[i]<<endl;
        if(cnt[i]!=0)
        printf("%c - %d\n",i+97,cnt[i]);
    }
   /* for(int i=0;i<s.length();i++){
        int val=s[i]-97;
        if(cnt[val]!=0)
        printf("%c - %d\n",val+'a',cnt[val]);
        cnt[val]=0;

    }*/
}

