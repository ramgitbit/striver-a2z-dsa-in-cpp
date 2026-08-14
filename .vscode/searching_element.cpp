#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int ele ;
    cout<<"enter element want to search.";
    cin>> ele;
    int arr[n] = {1,2,3,4,5};
    int i =0;
    for (i=0; i<n;i++){
        if( arr[i] == ele){
            cout<<"index of "<<ele<<" is: "<< i<<endl;
            break;
        }
    }
    if (i == n){
    cout<<"element not found";
    }

    return 0;
}