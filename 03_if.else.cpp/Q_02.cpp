//either no. is +ve, -ve or 0.
#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter  the value of a "<<endl;
    cin>>a;

    if (a>0) {
        cout<<"A is positive"<<endl;
    }
    else if (a<0) {
        cout<<"A is negative"<<endl;
    }
    else {
        cout<<"A is 0"<<endl;
    }

    return 0;

}
