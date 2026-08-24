#include<iostream>
using namespace std;
void change(int x[]){
    x[0]= 20;
}
int main(){
    int a[] = {1,4,7,2,8,3};
    // int n= sizeof(a) / 4;
    change(a); ///yaha pe &a[0] ka addrsss gaya hai (Base address)
    cout<<a[0]<<endl;
}