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
    int val;
    while(true){
        cin>>val;
        if(val==-1){ break;}
        insert_tail(head,tail,val);
    }
   node *p=head,*temp=head;
   while(p!=NULL){
    node *q=p->next;
    temp=p;
    while(q!=NULL){
        if(p->val==q->val){
            temp->next=q->next;
        }
        else temp=q;
        q=q->next;
    }
    p=p->next;
   }
    print_Linked_list(head);
    return 0;
}