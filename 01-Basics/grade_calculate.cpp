#include <bits/stdc++.h>
using namespace std;

int main()
{
   int G;
   cin >> G;
   if (G<= 25){
    cout << "Fail";

   }
   else if(G > 25 && G<=40){
    cout << "Grade = C";
    
   }
   else if(G > 40 && G<= 60){
    cout<< "Grade = B";
   }
   else{
    cout << "Grade = A++";
   }
    return 0;
}