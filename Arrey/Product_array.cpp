#include<iostream>
using namespace std;
int main(){
    int n;
    int  p = 1;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i = 0; i<=n-1;i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<= n-1; i++){
       p *= arr[i];
    
}
cout<<"The sum of array is "<<p;
}