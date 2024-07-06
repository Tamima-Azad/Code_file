#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class node{
    public:
    int val;
    node *next, *prev;
     node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void display2(node *head){
    if(head==NULL)return;
    display2(head->next);
    cout << head->val << " ";
}
void display(node *head){
    node *h = head;
    cout << "L -> ";
    while(true){
        cout << h->val << " ";
        if(h->next==NULL)break;
        h = h->next;
    }
    cout << "\nR -> ";
    display2(head);
    cout << endl;
}
int main(){
    int n; cin >> n;
    node *head = NULL, *newnode=NULL,*tail=NULL;
    while(n--){
        int x, v, c = 0;
        cin >> x >> v;
        if(head==0){
            if(x==0){
                newnode = new node(v);
                head = newnode;
                head->prev = NULL;
                tail = newnode;
                tail->next = NULL;
                display(head);
            }
            else cout << "Invalid" << endl;
        }
        else {
            if(x==0){
                newnode = new node(v);
                newnode->next = head;
                newnode->prev = NULL;
                head->prev = newnode;
                head = newnode;
                display(head);
            }
            else{
                node *tmp = head;
                int c = 0;
                while(tmp!= NULL){
                    c++;
                    tmp=tmp->next;
                }
                if(x>c)cout << "Invalid" << endl;
                else if(x==c){
                    newnode = new node(v);
                    tmp=head;
                    while(true){
                        if(tmp->next==NULL)break;
                        tmp = tmp->next;
                    }
                    tmp->next = newnode;
                    newnode->prev = tmp;
                    newnode->next = NULL;
                    display(head);
                }
                else{
                    tmp = head;
                    for(int i = 0; i < x-1; i++){
                        tmp = tmp->next;
                    }
                    newnode = new node(v);
                    newnode->next = tmp->next;
                    newnode->prev = tmp;
                    tmp->next = newnode;
                    display(head);
                }
            }
        }
    }
    return 0;
}