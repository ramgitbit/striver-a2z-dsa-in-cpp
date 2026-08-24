#include <iostream>
using namespace std;

int main() {
    int a[] = {1,4,4,1,6};
    int n = sizeof(a) / sizeof(a[0]);
    bool p = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[n-1-i]){
            p= false;
            break;
        }
       
    }
    if(p){
        cout<<"it is palindrome";
    }
    else{
        cout<<"it is not palindrome";
    }

    return 0;
}
