#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool Sort(student a,student b){
    if(a.eng_marks==b.eng_marks){
        if(a.math_marks==b.math_marks){
            return a.id<b.id;
        }else{
            return a.math_marks>b.math_marks;
        }
    }
    else{
    return a.eng_marks>b.eng_marks;
    }
}
int main(){
    int N; cin >> N;
    student ss[N];
    for(int i=0;i<N;i++){
        cin>>ss[i].nm>>ss[i].cls>>ss[i].s>>ss[i].id>>ss[i].math_marks>>ss[i].eng_marks;
    }
    sort(ss , ss + N, Sort);
    for(int i=0;i<N;i++){
        cout<<ss[i].nm<<" "<<ss[i].cls<<" "<<ss[i].s<<" "<<ss[i].id<<" "<<ss[i].math_marks<<" "<<ss[i].eng_marks<<endl;
    }
}
