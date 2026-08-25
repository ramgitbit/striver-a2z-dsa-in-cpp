#include<iostream>
using namespace std;
int main(){
    int a[] = {1,4,7,2,8,3};
    int n= sizeof(a) / 4;
    cout<<a<<endl;  ///// note arr and arr[0]  both are same address or base address.
    cout<<&a[0]<<endl;
    cout<<&a[1]<<endl;
    cout<<&a[2]<<endl;
    cout<<&a[3]<<endl;
}