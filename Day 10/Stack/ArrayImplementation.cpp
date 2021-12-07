#include<bits/stdc++.h>
using namespace std;
#define MX 5

class stackClass{

    int* arr = new int[MX];
    int val;
    int head = -1;

    public:
    void push(int val){

        if(head == MX-1){
            cout<<"Stack overflow!\n";
            return;
        }
        head += 1;
        arr[head] = val;
    }

    void pop(){
        if(head == -1){
            cout<<"Stack underflow!\n";
            return;
        }
        head -= 1;
    }

    void top(){
        if(head == -1){
            cout<<"Stack empty.\n";
            return;
        }

        cout<<"Top: "<<arr[head]<<endl;
    }
};

int main(){

    stackClass s1, s2;
    s1.top();
    s1.push(1);
    s1.push(10);
    s1.push(2);
    s1.push(20);
    s1.push(100);
    s1.push(200);
    s1.top();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.top();
}