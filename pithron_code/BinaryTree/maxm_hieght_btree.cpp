#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node *left,*right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* input_tree(){
    int val; cin>>val;
    node* root;
    if(val==-1) root=NULL;
    else root=new node(val);
    queue<node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        node* p=q.front();
        q.pop();
        //jabotiyo kaj
        int l,r; cin>>l>>r;
        node *myleft,*myright;
        if(l==-1){
            myleft==NULL;
        }else{
            myleft=new node(l);
        }if(r==-1){
            myright=NULL;
            }else{
                myright=new node(r);
            }
        
        p->left=myleft;
        p->right=myright;
        //child k faka kora
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;
}
int maxHeight(node* root){
    if(root==NULL) return 0;
    int l=maxHeight(root->left);
    int r=maxHeight(root->right);
    return max(l,r)+1;
}
int main(){
    node* root=input_tree();

    cout<<maxHeight(root)<<endl;
    return 0;
}