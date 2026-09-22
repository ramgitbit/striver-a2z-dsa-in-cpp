//insert at end
/// size > 0
#include<iostream>
using namespace std;
class Node{  //useer define date typpe
    public:
    int val;
    Node* next;
    Node(int val){ 
         this->val = val;
         this->next = NULL;

    }
};
class Linkedlist{//user define data structure
 public:
    Node * head;
 Node * tail;
int size;
Linkedlist(){
    head = tail = NULL;
    size  =0;
}
void insertAtTail(int val){
    Node * temp = new Node(val);
    if (size ==0) head = tail = temp;
    else{
        tail->next = temp;
        tail = temp;
    }
    size++;
}
void insertAtHead(int val){
    Node * temp = new Node(val);
    if (size ==0) head = tail = temp;
    else{
        temp->next = head;
        head  = temp;
    }
    size++;
}
void insertAtIdx(int idx,int val){
    if(idx <0 || idx>size){
        cout<<"invalid index"<<endl;
    }
    else if(idx ==0){
        insertAtHead(val);
    }
    else if(idx == size){
        insertAtTail(val);
    }
    else{
        // beech me insert 
       Node * t = new Node(val);
         Node * temp = head;
         for(int i = 1; i<= idx-1;i++){
            temp = temp->next;
         }
         t->next = temp->next;
         temp->next = t;
    }
}
int getAtIndx(int idx){
    if(idx<0 || idx>size){
        cout<<"invalid idx";
        return -1;
    }
    else if(idx ==0) return head->val;
    else if(idx ==size-1) return tail ->val;
    else{
        Node* temp = head;
        for(int i = 0;i<idx;i++){
            temp = temp->next;
        }
        return temp->val;
    }
}
void deleteAthead(){
    if(size == 0) {
        cout<<"empty";
        return;
    } 
    head = head->next;
    size--;
}
void deleteAtTail(){
     if(size == 0) {
        cout<<"empty";
        return;
    } 
    Node * temp = head; 
   while(temp->next != tail){
    temp = temp->next;
   }
   temp->next = NULL;
   tail= temp;
   size--;
}
void deleteATidx(int idx){
      if(idx<0 || idx>size){
        cout<<"invalid idx";
        return ;
    }
     else if(size == 0) {
        cout<<"empty";
        return;
    } 
else if(idx ==0) return deleteAthead(); 
else if(idx ==size-1) return deleteAtTail(); 
else{
    Node* temp = head;
    for(int i =0; i<idx-1;i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    size--;
}
}
void display(){
Node * temp = head;
while ((temp != NULL)){
     cout<<temp->val<<" ";
     temp = temp->next;
}
cout<<endl;
}
};
int main(){
 Linkedlist ll ; // {}
 ll.insertAtTail(10); //{10 -> null}
 ll.display();
 ll.insertAtTail(20); // {10->20->NULL}
 ll.insertAtTail(30); // {10->20->NULL}
 ll.insertAtTail(40); // {10->20->NULL}
 ll.display();
 ll.insertAtHead(45);  // {45-> 10->20->NULL}
 ll.display(); 
 ll.insertAtIdx(2,60);
 ll.display();
  cout<<ll.getAtIndx(9)<<endl;
  ll.deleteATidx(0);
  ll.display();
  ll.deleteAtTail();
  ll.display();
  ll.deleteAthead();
  ll.display();
}
