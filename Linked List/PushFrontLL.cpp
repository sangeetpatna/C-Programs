#include <iostream>
using namespace std;

// we create a linked list by the help of two below classes.

class Node{
public:
    int data;
    Node* next; //pointer to the next node

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head; //pointer to the first node in a linked list
    Node* tail; //pointer to the last node in a linked list

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.printLL();
    return 0;
}