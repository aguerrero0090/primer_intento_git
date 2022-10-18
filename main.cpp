#include <iostream>
using namespace std;
int cordenadax = 15, cordenaday = 15;
int main() {

    do{
        cout << "ingresa la cordenada de x ";
        cin >> cordenadax;
    } while (cordenadax > 10 || cordenadax < -10);
    cout << cordenadax;


    return 0;
}
