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
int main(){
    // Node a;
    // a.val= 10;
    // Node b;
    // b.val = 20;
    // Node c;
    // c.val= 30;
    // Node d;
    // d.val = 40;   //// ab yese bar bar thodi na so we make constructou---
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);  // ye ssare hone ke baad mai chata hu ki sara address null ho jaye 
    //to..
    // a.next = NULL; 
    // b.next = NULL; 
    // c.next = NULL; 
    // d.next = NULL;   /// ye hai pagalo ka tarika  so done in constructor

    //forming ll
    a.next = &b;
    b.next = &c;
    c.next = &d;
    // // ((a.next)->next) == b.nxt = cka address since a.next == b ka address uska next  =c uska nest = d..
    // cout<<((a.next)->next)->val;
    // cout<<endl; 
    // cout<<(((a.next)->next)->next)->val; // ====d ka ddress hai aur uski valu print
  

    // print all list
     Node temp = a;
     while(true){
        cout<<temp.val<<" ";
        if(temp.next == NULL) break;
        temp = *(temp.next);  // iska mlb value of b
     }
}
