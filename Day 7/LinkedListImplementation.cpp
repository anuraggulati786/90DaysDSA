#include<bits/stdc++.h>
using namespace std;

class node{
    int value;
    node* next;
    
    public:

    void InsertAtHead(node* &head, int val){

        if(head == NULL){
            node* newNode = new node(val);
            return; 
        }
        node* newNode = new node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(node* &head, int val){
        
        if(head == NULL){
            InsertAtHead(head, val);
            return;
        }
        node* tmp = head;

        while(tmp->next != NULL)
            tmp = tmp->next;

        node* newNode = new node(val);
        tmp->next = newNode;
        // newNode->next = NULL;
    }

    void DeleteNodeAt(node* &head, int pos){

        if(pos == 1){
            node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }

        node* tmp = head;
        int i = 1;

        while(i<pos){
            if(tmp->next == NULL){
                cout<<"OUT OF BOUNDS!\n";
                return;
            }
        
            tmp = tmp->next;
            i++;
        }
        node* toDelete = tmp->next;
        tmp->next = tmp->next->next;
        delete toDelete;
    }

    

    void displayList(node* head){
        node* tmp = head;

        while(tmp != NULL){
            cout<<tmp->value<<"->";
            tmp=tmp->next;
        }
        cout<<"NULL\n";
    }
    
   
    node(int val){
        this->value = val;
        this->next = NULL;
    }
};


int main(){

    node* head = new node(1);
    head->displayList(head);
    head->insertAtTail(head, 2);
    head->displayList(head);
    head->InsertAtHead(head, 3);
    head->displayList(head);
    head->DeleteNodeAt(head, 1);
    head->displayList(head);

}