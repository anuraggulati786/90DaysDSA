#include<bits/stdc++.h>
using namespace std;

int KthGrammar(int n, int k){

    if(n == 1)
        return 0;

    
    int mid = power(2,n-1)/2;

    if(k <= mid)
        return KthGrammar(n-1, k);

    else{
        return !KthGrammar(n-1,k-mid );
    }
}

int main(){
    int n, k;
    cin>>n>>k;
    cout<<KthGrammar(n,k);

}