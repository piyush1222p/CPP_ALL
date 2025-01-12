#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Pointers in C++
    // =================

    /* Pointers are variables that store the memory address of other variables.
       Sometimes it is easier to work with addresses. */

    // & address-of Operator
    // * dereference Operator

    string name = "Piyush";
    int age = 20;
    string pizza[5] = {"Pizza_1", "Pizza_2", "Pizza_3", "Pizza_4", "Pizza_5"};

    string *pName = &name;
    int *pAge = &age;
    string *pPizza = pizza;

    // Accessing Memory Addresses
    // -------------------------

    cout << "Memory Addresses:" << endl;
    cout << "Name: " << pName << endl;
    cout << "Age: " << pAge << endl;
    cout << "Pizza: " << pPizza << endl;

    // Accessing Values using Pointers
    // ------------------------------

    cout << "\nValues:" << endl;
    cout << "Name: " << *pName << endl;
    cout << "Age: " << *pAge << endl;
    cout << "Pizza: " << *pPizza << endl;

    // Accessing Array Elements using Pointers
    // --------------------------------------

    cout << "\nArray Elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Pizza_" << i + 1 << ": " << *(pPizza + i) << endl;
    }

    return 0;
}