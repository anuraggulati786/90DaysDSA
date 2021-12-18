#include<bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> &arr, int key){

    int s = 0, e = arr.size()-1;

    while(s <= e){
        int mid = s + (e-s)/2;

        if(arr[mid] == key){
            cout<<"YES\n";
            return;
        }

        else if(arr[mid] > key)
            e = mid-1;

        else
            s = mid+1;
    }

    cout<<"NO\n";
}

int main(){

    int size, k;
    cin>>size>>k;
    vector<int> arr;

    for(int i = 0; i<size; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    for(int i =0; i<k; i++){
        int key;
        cin>>key;
        binarySearch(arr, key);
    }   
}