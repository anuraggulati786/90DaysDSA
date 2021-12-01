/*
ITERATIVE SOLUTION
*/

#include<bits/stdc++.h> 
using namespace std;

void reverse(vector<char> &s){

    for(int i =0; i<s.size()/2; i++){
        int tmp = s[i];
        s[i] = s[s.size()-1-i];
        s[s.size()-1-i] = tmp;
    }
}

int main(){

    vector<char> s = {'h','e','l','l','o'};
    reverse(s);
    
    for(auto x:s)
        cout<<x<<" ";
}