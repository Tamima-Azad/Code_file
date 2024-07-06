
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    string val;
    node* next;
    node*prev;
    node(string val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
node *tmp;
void display(node *h, string s){
    int c = 0;
    while(h!=NULL){
        if(h->val == s){
            c = 1;
            cout << h->val << endl;
            tmp = h;
        }
        h = h->next;
    }
    if(c==0)cout << "Not Available" << endl;
}
void insert_tail(node *&head,node *&tail,string val){
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

int main(){
    node* head=NULL;
    node* tail=NULL;
    string val;int c=0;
    while(true){
        cin>>val;
        if(val=="end") break;
        insert_tail(head,tail,val);
        c++;
    }
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s=="visit"){
            string s2;
            cin >> s2;
            display(head, s2);
        }
         if(s=="next"){
            if(tmp->next != NULL && tmp != NULL){
                cout << tmp->next->val << endl;
                tmp = tmp->next;
            }
            else cout << "Not Available" << endl;
        }
        if(s=="prev"){
            if(tmp!=NULL && tmp->prev != NULL){
                cout << tmp->prev->val << endl;
                tmp = tmp->prev;
            }
            else cout << "Not Available" << endl;

        }
       
    }
    return 0;
}