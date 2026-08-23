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
    int s;
    cout<<"enter finding element"<<endl;
    cin>>s;
    for(int i=0; i<= n-1; i++){
       if (s==arr[i]){
        cout<<"Yes the element "<< s<< " is present in array.";
        break;
       }
       else{
        cout<<"Nhi bhai nahi hai koi element ";
        break;
       }
}

}