#include<iostream>
using namespace std;

int main(){
    int*pPointer=nullptr;
    int intvar=5;
    pPointer=&intvar;
    cout<<"The value of intvar is: "<<intvar<<endl;
    cout<<"The address of intvar is: "<<&intvar<<endl;
    cout<<"The value of pPointer is: "<<pPointer<<endl;
    cout<<"the address of pPointer is: "<<&pPointer<<endl;
    return 0;
}