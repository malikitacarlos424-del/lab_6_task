#include<iostream>
using namespace std;

int main(){
    int*pPointer=nullptr;

    int numberarray[3]={10,20,30};

    pPointer=numberarray;//assign addrss of the 1st element
    cout<<"the address at pPointer is"<<pPointer<<endl;
    cout<<"address of numberarry[0] is "<<numberarray<<endl;

    //using indirection
    cout<<"the first value using indirection is "<<*pPointer<<endl;
    cout<<"the value at ++pPointer is "<<++pPointer<<endl;
    pPointer=numberarray;

    cout<<"the value at pPointer++"<<*(pPointer++);
}