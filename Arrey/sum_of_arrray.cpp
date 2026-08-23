#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i = 0; i<=n-1;i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<= n-1; i++){
       sum += arr[i];
    
}
cout<<"The sum of array is "<<sum;
}