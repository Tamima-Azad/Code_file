#include<bits/stdc++.h>
using namespace std;
class myStack{
    vector<int>v;
    public:
    void Push(int val){
        v.push_back(val);
    }
    void Pop(){
        v.pop_back();
    }
    int Top(){
        return v.back();
    }
    bool Empty(){
        if(v.size()==0) return true;
        else return false;
    }
};
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class myQueue{
    public:
    node* head=NULL;
    node* tail=NULL;
    int sz=0;
    void Push(int val){
        sz++;
        node* newnode=new node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=tail->next;
    }
    void Pop(){
        sz--;
        node* deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL){
            tail=NULL;
        }
        }
        int Front(){
            return head->val;
        }
        int Size(){
            return sz;
        }
        bool Empty(){
            if(sz==0) return true;
            else return false;
        }
    

};
int main(){
    myStack sk;
    int n,m; cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        sk.Push(x);
    }
    myQueue qe;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        qe.Push(x);
    }
    int cnt=0;
    //for(int i=0;i<n;i++){
        
        while(sk.Empty()==false&&qe.Empty()==false){
            if(sk.Top()==qe.Front()){
            cnt++;}
        sk.Pop();
        qe.Pop();
        }
//}
//cout<<cnt<<endl;
        if(n==m&&cnt==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}