/*
RECURSIVE SOLUTION
*/

#include<bits/stdc++.h>
using namespace std;

int i = 0;

void reverse(vector<char> &s){

    if(i >= s.size()/2)
        return;

    swap(s[i], s[s.size()-1-i]);
    i+=1;
    reverse(s);
}

int main(){

    vector<char> s = {'h','e','l','l','o'};
    reverse(s);

    for(auto x:s)
        cout<<x<<" ";

}