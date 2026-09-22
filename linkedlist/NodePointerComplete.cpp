#include<iostream>
using namespace std;
class Node{ 
    public:
    int val;
    Node* next;
    Node(int val){  ///Node( isme jaruri nahi ki sare attribe isme dalna hai )
         this->val = val;  //  or val = v; 
         this->next = NULL;

    }
};
void display(Node*head){
    Node * temp = head;
    while(temp != NULL){ 
    cout<<temp->val<<" ";  /// temp->val == *(temp).val == usddress ki value
    temp = temp->next;  
    //or
    /// while(head != NULL){cout<<head->val<<" "; head = head->next}
}
}
void insertATEnd(Node * head, int val){
    Node * t = new Node(80);
    while (head->next != NULL) head = head-> next;
    head->next   = t;
}
int main(){
   Node * a = new Node(10);
   Node * b = new Node(20);
   Node * c = new Node(30);
   Node * d = new Node(40);
   a->next = b;
   b->next=c;
   c->next = d;   
//    Node*  temp = a;
//    while(temp != NULL){ 
//     cout<<temp->val<<" ";  
//     temp = temp->next;  
//    }
   // cout<<a->next->next->next->val;
   display(a); 
   insertATEnd(a,80);
   display(a);
}
