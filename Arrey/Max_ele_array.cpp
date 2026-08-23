#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i = 0; i<=n-1;i++){
        cin>>arr[i];
    }
    int m = arr[0];
    for(int i=0; i<= n-1; i++){
       if (m < arr[i]){
        m = arr[i];}
}
cout<<"The Max element of array is "<< m;
}