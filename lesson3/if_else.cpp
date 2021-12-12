#include <bits/stdc++.h>
using namespace std;
 
 int main() {
     
      int savings;

     cout<<"please put your savings amount\n";
     cin>>savings;

     if (savings>7500) {
         if (savings>10000) {
             cout<<"honda civic\n";
         } else {
             cout<<"vitz\n";
         }  
     } else if (savings>5000) {
          if (savings>6500 && savings<7501) {
              cout<<"honda 70\n";
          } else {
              cout<<"united\n";
          }
            
         } else if (savings>2000) {
         cout<<"bmx\n";
     } else {
         cout<<"sorab\n";
     }
}