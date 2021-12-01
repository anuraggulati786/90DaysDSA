#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){

    if(n ==2 or n == 1)
        return 1;

    if(n%2 != 0 or n == 0)
        return 0;
    
    return isPowerOfTwo(n/2);
}

int main(){

    cout<<isPowerOfTwo(3);
}