#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;
        int l = s.length(), finalCount = 0;

        for(int i =0; i<l; i++){
            if(i == l-1 and s[i] == 'N'){
                finalCount += 1;
                s[i] = 'P';
            }

            if(i-1 >= 0 and s[i] == 'N' and s[i-1] == 'N'){
                finalCount += 1;
                s[i] = 'P';
            }
        }

        int countN = 0;
        int reqN = l/3;

        for(auto x:s)
            if(x == 'N')
                countN++;

        int Fans = finalCount + abs(countN - reqN);
        cout<<Fans<<endl;

    }

}