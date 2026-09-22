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
    }
   }
void displayrec(Node*head){
   // Node * temp = head;
   if(head == NULL) return;
    // cout<<head->val<<" "; 
    displayrec(head->next)  ; /// pritn ke baad recursive call to ascending
  cout<<head->val<<" ";  /// recursive call ke baad print to reverse;
}

int main(){
   Node * a = new Node(10);
   Node * b = new Node(20);
   Node * c = new Node(30);
   Node * d = new Node(40);
   a->next = b;
   b->next=c;
   c->next = d;   
   cout<<"Before reverse."<<endl;
   display(a);
   cout<<endl<<"after reverse."<<endl;
   displayrec(a); 
}
