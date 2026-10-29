#include<iostream>
using namespace std;

int main(){
    int numberOflements;
    int*dyamicArray=nullptr;

    cout<<"how many numbers would you like to type?:";
    cin>>numberOflements;

    dyamicArray=new int[numberOflements];
    if(dyamicArray==nullptr){
        cout<<"error:memory can not be allocated";
    }
    else{
        for(int i=0;i<numberOflements;i++){
            cout<<"enter a number:";
            cin>> dyamicArray[i];
        }
        cout<<"you have entered "<<endl;
        for(int j = 0;j<numberOflements;j++){
            cout<<dyamicArray[j]<<" , ";
        }
        delete[] dyamicArray;
    }
    return 0;
}