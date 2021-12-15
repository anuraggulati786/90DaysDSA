#include<bits/stdc++.h>
using namespace std;

int ans = 0;

void countGood(vector<int> &v, int ind, vector<int> &freq){

    bool c = false;
    
    if(ind == v.size()){
        if(c == true)
            ans++;
        return;
    }

    
    freq[v[ind] - 1]++;

    if(freq[v[ind] - 1] == 1){
        countGood(v, ind+1, freq);
        freq[v[ind] - 1]--;
        countGood(v, ind+1, freq);
    }

    else{
         c = true;
        freq[v[ind] - 1]--;
        countGood(v, ind+1, freq);
    }
        
            
    

}

int main(){



    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        unordered_map<int, int> mp;
        int ans = 1;


        vector<int> v(n, 0);

        for(int i =0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
            v.push_back(x);
        }


        for( auto it: mp){

            int tmp = it.second;
            ans *= (tmp + 1);
            ans %= 1000000007;
        }

        ans -= 1;

        cout<<ans<<endl;
        

    }
}
