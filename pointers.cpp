#include <iostream>
using namespace std;

int main(){

    int firstvalue;
    int secondvalue;

    int *pPointer = nullptr;

    pPointer = &firstvalue;
    *pPointer = 10; // Indirection
    // assign pointer with the address of secondVa1ue
    pPointer = &secondvalue;
    *pPointer =20; // Indirection
    cout<< "firstva1ue is "<<firstvalue<<endl;
    cout<<"secondVa1ue is "<<secondvalue<<endl;
    cout<<"the address of the first value is "<<&firstvalue<<endl;
    return 0;
}