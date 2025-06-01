#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>aa;//empty vector
    vector<int>box={3,1,5,9,6,7,1,2,8,4};
    int var=box[4]*box[9];
    cout<<var<<endl;
    box.push_back(10);
    int x=*box.begin();
    int y=*(box.end()-1);
    cout<<x<<endl<<y<<endl;
    box.pop_back();
    cout<<*(box.end()-1)<<endl;
    //we can erase 3rd item;
    //box.erase(box.begin()+2);
    //box.erase(box.end()-8);
   // int v=box.end()-box.begin();//size of vector
   box.erase(box.begin()+2,box.begin()+5);//1st 3 item delete
   int v=box.size();
    cout<<v<<endl;
    for(int i=0;i<v;i++)
    {
        cout<<box[i]<<" ";
    }
}
