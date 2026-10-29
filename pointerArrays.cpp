#include<iostream>
using namespace std;

int main(){
    int numberArray[5];

    int*pPointer =nullptr;
    pPointer=numberArray;

    *pPointer=10;
    *pPointer++;
    *pPointer=20; 

    pPointer=&numberArray[2];
    *pPointer=30;

    pPointer=numberArray+3;
    *pPointer=40;

    *(pPointer+4)=50;
    for (int n=0;n<5;n++){
        cout<<numberArray[n]<<" , ";
    }
    return 0;
}