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
void preorder(node *root){
    //base case
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void inorder(node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){
    node* root=new node(10);
    node* a=new node(20);
    node* b=new node(30);
    node* c=new node(40);
    node* d=new node(50);
    node* e=new node(60);
    node* f=new node(70);
    node* g=new node(80);
    node* h=new node(90);
    node* i=new node(100);
   // node* root=new node(10);
   root->left=a;
   root->right=b;
   a->left=c;
   a->right=h;
   c->right=e;
   b->right=d;
   d->left=f;
   d->right=g;
   h->right=i;
   node *x=root;
   cout<<"preorder:"<<endl;
   preorder(root);
   cout<<endl;
   cout<<"posorder"<<endl;
   postorder(root);
   cout<<endl;
   cout<<"inorder"<<endl;
   inorder(root);

}