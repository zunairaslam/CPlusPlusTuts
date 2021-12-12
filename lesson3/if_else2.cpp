#include <iostream>
using namespace std;

int main() {
    
    int a,b,c;
    cout<<"please enter the values\n";
    cin>>a>>b>>c;
    if (a>b) {
        if (a>c) {
            cout<<a;
        } else {
            cout<<c;
        }
    } else if (b>c) {
        cout<<b;
    } else {
        cout<<c;
    }
}