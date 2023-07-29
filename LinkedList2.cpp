// Taking inout for creation of a node
#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};
Node* input(){
int data;
cin>>data;
Node*head=nullptr;
Node*tail=nullptr;
while(data!=-1){
    Node *newNode=new Node(data);
if(head==nullptr){
    head=newNode;
    tail=newNode;
}
else{
    tail->next=newNode;
    tail=newNode;



}
cin>>data;
}
return head;

}