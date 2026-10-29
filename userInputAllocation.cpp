#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *pnumber = new int;
    string *pmessage = new string;

    cout << "Enter a number: ";
    cin >> *pnumber;

    cout << "Enter a message: ";
    cin >> *pmessage;

    cout << "You have entered the number: " << *pnumber << endl;
    cout << "You have entered the string: " << *pmessage << endl;

    delete pnumber;
    delete pmessage;

    return 0;
}
