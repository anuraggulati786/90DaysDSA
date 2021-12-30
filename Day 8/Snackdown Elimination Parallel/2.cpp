#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int size;
        string s;
        cin>>size;
        cin>>s;
        int c0 = 0, c1 = 0, cq = 0;

        for(int i =0; i<size; i++){
            
            if(s[i] == '1')
                c1++;
            else if(s[i] == '0')
                c0++;
            else 
                cq++;
        }
        //cout<<c0<<" "<<c1<<endl;
        for(int i = 0; i<size; i++){

            if(s[i] == '?'){
                if(c1 > c0){
                    s[i] = '0';
                    c0++;
                }
                    

                else if(c1 < c0){
                    s[i] = '1';
                    c1++;
                }

                else{
                    s[i] = '1';
                    c1++;
                }
            }
        }

        cout<<s<<endl;
    }

}