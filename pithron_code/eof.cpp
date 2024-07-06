#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
             sort(s.begin(),s.end());
            string ss;
            int l=s.size(),k=0;
            for(int i=0;i<l;i++){
                if(s[i]>='a'&&s[i]<='z'){
                cout<<s[i];
                }
                else
                    continue;
            }

        cout<<endl;
    }
    return 0;
}
