#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(node *&head,node *&tail,int val){
    node *newnode=new node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_Linked_list(node *head){
    node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main(){
    node *head=NULL;
    node *tail=NULL;
    int val,c1=0,c2=0;
    while(true){
        cin>>val;
        if(val==-1){ break;}
        insert_tail(head,tail,val);
        c1++;
    }
    node *head1=NULL;
    node *tail1=NULL;
    while(true){
        cin>>val;
        if(val==-1){ break;}
        insert_tail(head1,tail1,val);
        c2++;
    }
    node *p=head,*q=head1;
    int flag=0;
    if(c1==c2){
    while(p!=NULL){
        if(p->val!=q->val){
            flag=1;
            break;
        }
        p=p->next;
        q=q->next;
    }
    if(flag==1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
    }}
    else cout<<"NO"<<endl;
    //print_Linked_list(head);
    return 0;
}