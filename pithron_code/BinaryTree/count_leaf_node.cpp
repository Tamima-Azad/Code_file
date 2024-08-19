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
int count_leaf(node* root){
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL){
        return 1;
    }else{
    int l=count_leaf(root->left);
    int r=count_leaf(root->right);
    return r+l;
    }
}
int main(){
    node* root=input_tree();

    cout<<count_leaf(root)<<endl;
    return 0;
}