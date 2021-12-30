#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int people, eco, fuel;
        cin>>people>>eco>>fuel;

        cout<<(eco-(people-1))*fuel<<endl;
    }
}