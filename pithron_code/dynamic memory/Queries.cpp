#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    // node(int val){
    //     this->val=val;
    //     this->next=NULL;
    // }
};
// void insert_tail(node *&head,node *&tail,int val){
//     node *newnode=new node(val);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     tail->next=newnode;
//     tail=newnode;
// }
void print_Linked_list(node *head){
    node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main(){
    int n;cin>>n;
    node *head=NULL,*p=NULL;
    node *tail=NULL;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x,v;cin>>x>>v;
    if(x==0){
        if(head==NULL){
            head=new node;
            head->val=v;
            head->next=NULL;
            tail=head;

        }
        else{
            p=new node;
            p->val=v;
            p->next=head;
            head=p;
        }
        print_Linked_list(head);
        cnt++;
    }
     else if(x==1){
        if(head==NULL){
            head=new node;
            head->val=v;
            head->next=NULL;
        }
        else{
            node *tmp=head;
            while(tmp!=NULL){
                if(tmp->next==NULL){
                    p=new node;
                    tmp->next=p;
                    p->val=v;
                    p->next=NULL;
                    break;
                }
                tmp=tmp->next;
            }
        }
        print_Linked_list(head);
        cnt++;
        }
        else{
            if(cnt-1<v) print_Linked_list(head);
            else if(v==0){
                head=head->next;
                cnt--;
                print_Linked_list(head);
            }
            else if(v==cnt){
                node *tmp=head;
                while(true){
                    if(tmp->next==NULL){
                        tail->next=NULL;
                    }
                    tail=tmp;
                    tmp=tmp->next;

                }
                 print_Linked_list(head);
                 cnt--;
            }
            else{
                node *tmp=head;
                int ccnt=0;
                while(tmp!=NULL){
                    if(v==ccnt){
                        tail->next=tmp->next;
                    }
                    ccnt++;
                    tail=tmp;
                    tmp=tmp->next;
                    }
                 print_Linked_list(head);
                ccnt++;
            }
        }
        cout<<endl;
    }
 //   print_Linked_list(head);
    return 0;
    }
   
