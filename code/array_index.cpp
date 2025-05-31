#include<bits/stdc++.h>
using namespace std;
int main(){
    int size; cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //middle index delete;
    // cout<<"Enter index for delete : ";
    // int index; cin >> index;
    // for(int i=index;i<size-1;i++){
    //     arr[i]=arr[i+1];
    // }
    //update for any index;

    // cout<<endl;
    // cout<<"Enter index for update: ";
    // int index; cin>>index;
    // cout<<"enter a new value: ";
    // int value; cin>>value;
    // arr[index]=value;
    //loop for deleted index;
    // for(int i=0;i<size-1;i++){
    //     cout<<arr[i]<<" ";
    // }

    // insert element in middle index;
    // cout<<"Enter index to insert : ";
    // int inx; cin>>inx;
    // cout<<"Enter data to insert : ";
    // int data; cin>>data;
    // for(int i=size;i>inx;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[inx]=data;
    // for(int i=0;i<=size;i++){
    //     cout<<arr[i]<<" ";
    // }
    

    return 0;
}