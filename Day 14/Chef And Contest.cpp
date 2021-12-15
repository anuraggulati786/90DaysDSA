#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int c, y, p, q;
        cin>>c>>y>>p>>q;

        if(c + 10*p > y + q*10)
            cout<<"Chefina\n";

        else if(  c + 10*p < y + q*10  )
            cout<<"Chef\n";

        else 
            cout<<"Draw\n";
    }

}
