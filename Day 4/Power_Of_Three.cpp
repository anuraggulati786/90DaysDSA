#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n){

    // if(n == 1)
    //     return 1;

    // if(n == 0 or n%3 != 0)
    //     return 0;

    // return isPowerOfThree(n/3);
    return  (int)log10(n)/(int)log10(3) % 1 == 0;
}

int main(){

    cout<<isPowerOfThree(45);

}