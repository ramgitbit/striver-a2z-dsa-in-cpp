#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/4;
    int i = 0;  /// 0 se chlega naa ki arr[0] se ..
    int j = n-1;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; // i se age jayenge 
        j--; // j se ek ek karke piche aayenge
    }
    for (int k = 0; k<n;k++){
        cout<<arr[k]<<" ";
    }



}