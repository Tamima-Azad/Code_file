#include <bits/stdc++.h>

using namespace std;
class student{
    public:
    int id;
    char name[100];
    char section;
    int marks;
};

int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++){
        student a,b,c;
        cin>>a.id>>a.name>>a.section>>a.marks;
        cin>>b.id>>b.name>>b.section>>b.marks;
        cin>>c.id>>c.name>>c.section>>c.marks;
        if(a.marks==b.marks&&b.marks>c.marks){
            if(a.id<b.id) cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            else cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
        }
        else if(b.marks==c.marks&&b.marks>a.marks){
            if(b.id<c.id) cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
            else cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
        }
        else if(a.marks==c.marks&&c.marks>b.marks){
            if(a.id<c.id) cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            else cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
        }
        else if(a.marks==b.marks&&b.marks==c.marks){
            if(a.id<b.id&&a.id<c.id)
                cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            else if(b.id<a.id&&b.id<c.id)
                 cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
            else
                cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
        }
        else{
            if(a.marks>b.marks&&a.marks>c.marks)
                cout<<a.id<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<endl;
            else if(b.marks>c.marks&&b.marks>a.marks)
                cout<<b.id<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<endl;
            else
                cout<<c.id<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<endl;
        }
    }


    return 0;
}

