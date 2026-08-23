#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    cout<<arr[2]<< endl;
    arr[2] = 88;
    cout<<arr[2]<<endl;
    cin>>arr[2];
    cout<<arr[2]<<endl;
    return 0;

}