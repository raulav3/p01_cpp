#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string textParell = "parell";
    string textSenar = "senar";
    
    bool* elMeuVector = new bool[10];
    for (int i = 0; i < 10; i++) {
        elMeuVector[i] = (i % 2 == 0);
    }
    int digit;
    while (true) {
        cout << "Introdueix un digit (0-9): ";
        cin >> digit;

        if (digit >= 0 && digit <= 9) {
            if (elMeuVector[digit]) {
                cout << "El " << digit << " es " << textParell << "." << endl;
            }
            else {
                cout << "El numero " << digit << " es " << textSenar << "." << endl;
            }
        }
        else {
            cout << "Error: Si us plau, introdueix estrictament un digit entre 0 i 9." << endl;
        }
    }
}