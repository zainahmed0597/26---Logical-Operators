#include <iostream>
using namespace std;

int main()
{
    int age;
    int money;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter how much money you have: ";
    cin >> money;

    if(age > 21 && money > 500){
        cout << "you are allowed in! " << endl;
    }

    if(age > 21 || money > 500){
        cout << "you are allowed in! " << endl;
    }
}
