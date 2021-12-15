#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int p1 = 0, p2 = 0, ans = 0;
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int tmp = k;

        while(p2 < n){

            while(p2 - p1 < k-1){

                if(s[p2] == '0')
                    tmp--;

                p2++;
            }

            if(s[p2] == '0')
                    tmp--;

            if(tmp == 0){
                ans++;
                p2 = p2+1;
                p1 = p2;
                tmp = k;
            }

            else{
                if(s[p1] == '0')
                    tmp++;
                p1++;
                p2++;
            }

        }

        cout<<ans<<endl;
    }
}
