#include <iostream>
using namespace std;

// ======================= NODE CLASS =======================
// Linked List ka har element ek "Node" hota hai.
//
// Har Node ke paas 2 cheezein hoti hain:
// 1. val  -> data/value store karega
// 2. next -> next Node ka address store karega

class Node {
public:

    // Data part
    int val;

    // Pointer part
    // next ek Node* pointer hai,
    // jo kisi doosre Node ka address store karega.
    Node* next;


    // ======================= CONSTRUCTOR =======================
    // Ye constructor Node object banate hi automatically call hoga.
    //
    // Example:
    // Node a(10);
    //
    // Isse constructor ke andar:
    // val = 10
    // next = NULL
    // ho jayega.

    Node(int val) {

        // "this->val" ka matlab:
        // current object ka val
        //
        // Right side wala "val" constructor ka parameter hai.
        //
        // this->val = val;
        //      ↑       ↑
        // current     parameter
        // object's    val
        // val

        this->val = val;


        // Jab Node create hoga,
        // initially uska next kisi Node ko point nahi karega.
        //
        // Isliye next ko NULL kar diya.
        //
        // NULL ka matlab:
        // "abhi koi next Node nahi hai"

        this->next = NULL;
    }
};


int main() {

    // =========================================================
    // PURANA TARIKA
    // =========================================================
    //
    // Agar constructor nahi hota, to hume har object ke
    // members ko manually initialize karna padta:
    //
    // Node a;
    // a.val = 10;
    //
    // Node b;
    // b.val = 20;
    //
    // Node c;
    // c.val = 30;
    //
    // Node d;
    // d.val = 40;
    //
    // Ye kaafi lengthy ho jata hai.


    // =========================================================
    // CONSTRUCTOR KA USE
    // =========================================================
    //
    // Constructor ki wajah se hum directly value pass kar sakte hain.

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);


    // Jab:
    // Node a(10);
    //
    // execute hua, constructor automatically call hua:
    //
    // a.val  = 10
    // a.next = NULL
    //
    // Similarly:
    //
    // b.val  = 20
    // b.next = NULL
    //
    // c.val  = 30
    // c.next = NULL
    //
    // d.val  = 40
    // d.next = NULL


    // =========================================================
    // NEXT KO MANUALLY NULL KARNE KI ZAROORAT NAHI
    // =========================================================
    //
    // Agar constructor me:
    //
    // this->next = NULL;
    //
    // nahi likhte, to hume manually karna padta:
    //
    // a.next = NULL;
    // b.next = NULL;
    // c.next = NULL;
    // d.next = NULL;
    //
    // Constructor ne ye kaam automatically kar diya.


    // =========================================================
    // AB LINKED LIST FORM KARTE HAIN
    // =========================================================
    //
    // Abhi Nodes alag-alag hain:
    //
    // a        b        c        d
    // 10       20       30       40
    // NULL     NULL     NULL     NULL
    //
    // Hume inko connect karna hai:
    //
    // a ---> b ---> c ---> d ---> NULL
    //
    // Iske liye "next" pointer me next Node ka ADDRESS
    // store karenge.


    // a ke next me b ka address store karo
    a.next = &b;

    // b ke next me c ka address store karo
    b.next = &c;

    // c ke next me d ka address store karo
    c.next = &d;

    // d ka next already NULL hai,
    // kyunki constructor me:
    // this->next = NULL;
    //
    // Isliye final Linked List:
    //
    // a          b          c          d
    // +----+     +----+     +----+     +----+
    // | 10 | --> | 20 | --> | 30 | --> | 40 |
    // +----+     +----+     +----+     +----+
    //                                      |
    //                                    NULL


    return 0;
}