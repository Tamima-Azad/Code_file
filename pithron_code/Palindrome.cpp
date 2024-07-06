#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node*prev;
    node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_tail(node *&head,node *&tail,int val){
    node *newnode=new node(val);
    if(tail==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}
void check_palindrome(node* head,node*tail,int c){
    node* tmp=head;
    node* t=tail;
    int cnt=0;
    while(tmp!=NULL){
        if(tmp->val==t->val){
            cnt++;
        }
         tmp=tmp->next;
            t=t->prev;
    }
    if(c==cnt) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    int val,c=0;
    while(true){
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
        c++;
    }
    check_palindrome(head,tail,c);
    return 0;
}