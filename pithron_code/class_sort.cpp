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
    int total_marks;
};
bool Sort(student a,student b){
    if(a.total_marks==b.total_marks){
        return a.id<b.id;
    }
    else{
    return a.total_marks>b.total_marks;
    }
}
int main(){
    int N; cin >> N;
    student ss[N];
    for(int i=0;i<N;i++){
        cin>>ss[i].nm>>ss[i].cls>>ss[i].s>>ss[i].id>>ss[i].math_marks>>ss[i].eng_marks;
        ss[i].total_marks=ss[i].math_marks+ss[i].eng_marks;
    }
    sort(ss , ss + N, Sort);
    for(int i=0;i<N;i++){
        cout<<ss[i].nm<<" "<<ss[i].cls<<" "<<ss[i].s<<" "<<ss[i].id<<" "<<ss[i].math_marks<<" "<<ss[i].eng_marks<<endl;
    }
}
