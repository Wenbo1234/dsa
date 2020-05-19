#include <iostream>

using namespace std;

int main(){
    int a0[5];
    int a1[5] = {1, 2, 3};

    int size = sizeof(a1)/sizeof(*a1);
    cout << "The size of a1 is : " << size <<endl;
    cout << "The first element is: " << a1[0] << endl;

    for (int i = 0; i < size; ++i) {
        cout << " " << a1[i];
    }

    cout << endl;
    cout << "[Version 2] The contents of a1 are:";
    for (int& item:a1 ) {
        cout << " " << item;
    }





}