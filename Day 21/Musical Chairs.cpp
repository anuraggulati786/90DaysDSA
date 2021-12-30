#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int n, cnt = 0; cin>>n;
        n--;

        for(int i =1; i*i <=n; i++){
            if(n % i == 0){
                cnt++;  
                if(i*i != n)
                    cnt++;
            }     
        }
        cout<<cnt<<endl;
    }
}