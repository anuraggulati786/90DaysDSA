#include<bits/stdc++.h>
using namespace std;

void formCombinations(vector<int> &v, int n){
    
    //cout<<1<<" ";
    auto it = v.begin();

    while(*it + *(it+1) <= n and v.size() >=2)
        v.erase(it+1);
         
        
    if(v.size() == 1){
        cout<<"YES\n";
    }

    else{
        cout<<"NO\n";
    }
    
    //formCombinations(v, n, 0);
}


int main(){


    int t;
    cin>>t;
    
    while(t--){

        int size, n;
        cin>>size>>n;
        vector<int> v;

        for(int i = 0; i<size; i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());

        // for(auto x:v)
        //     cout<<x<<" ";
        // auto it = v.begin();

        // cout<<*it;
       formCombinations(v, n);

    }
}