#include <iostream>
using namespace std;

int main(int argsc, char* argsv[]) {
    cout << "Text running" << endl << endl;

    cout << argsc << endl;

    for (int i = 0; i < argsc; i++) {
        cout << argsv[i] << endl;
    }

    return 0;
}