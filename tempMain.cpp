#include <iostream>
#include "Money.h"
using namespace std;

int main() {
    Money m(100, 33);
    cout << m << endl;

    Money n(150,00);
    Money o(100,50);
    if(n > o){
        cout << "N is bigger than O." << endl;
    } else {
        cout << "O is bigger than N." << endl;
    }
}