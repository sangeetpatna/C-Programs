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
};

int main(){
    return 0;
}