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
    int smax =arr[0];
    int m = arr[0];
    for(int i=0; i<= n-1; i++){
       if (m < arr[i]){
        m = arr[i];}
}
for (int i = 0; i<n;i++){
    if (smax < arr[i] && arr[i] != m){
        smax = arr[i];
    }
}
cout<<"The SMax element of array is "<< smax <<endl;
cout<<"The SMax element of array is "<< m;
}