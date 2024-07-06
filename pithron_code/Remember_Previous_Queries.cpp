#include <bits/stdc++.h>
using namespace std;
void displayleft_to_right(list<int> l){
    for(auto i: l)cout << i << " ";
}
void displayright_to_left(list<int>l){
    l.reverse();
    for(auto i: l)cout << i << " ";
    l.reverse();
}
int main(){
    int n;
    cin >> n;
    list<int>l;
    while (n--){
        int x, v;
        cin>>x>>v;

        if(x==0){
            l.push_front(v);
            cout << "L -> ";
            displayleft_to_right(l);
            cout << "\nR -> ";
            displayright_to_left(l);
        }
        else if(x==1){
            l.push_back(v);
            cout << "L -> ";
            displayleft_to_right(l);
            cout << "\nR -> ";
            displayright_to_left(l);
        }
        else{
            if(l.size()==0)cout << "L -> \nR -> ";
            else if(l.size() <= v){
                cout << "L -> ";
                displayleft_to_right(l);
                cout << "\nR -> ";
                displayright_to_left(l);
            }
            else {
                l.erase(next(l.begin(),v));
                cout << "L -> ";
                if(l.size()>0)
                displayleft_to_right(l);
                cout << "\nR -> ";
                if(l.size()>0)
                displayright_to_left(l);
            }
        }
        cout << endl;
    }


    return 0;
}