#include<bits/stdc++.h>
using namespace std;

int i = 0;
int numberOfSteps(int n){
    if(n == 0)
        return i;

    if(n%2 == 0){
        i++;
        numberOfSteps(n/2);
    }
        

    else{
        numberOfSteps(n-1);
        i++;
    }
        
}

int main(){

    cout<<numberOfSteps(123);
}