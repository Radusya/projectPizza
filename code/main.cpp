#include <iostream>
#include "helpFunctions.h"
#include "takeOrder.h"

using namespace std;





void start(){
    drawLine(20, true);
    cout << getFromSetup("NAME") << endl;
    drawLine(20, true);
    cout << "Witaj w programie Restauracji 1.0\n" << endl;
    cout << "Opcje: " << endl;
    cout << "[0] Zloz zamowienie" << endl;
    cout << "[1] Historia zamowien" << endl;
    cout << "[2] Historia zamowien dla danego dnia" << endl;
    cout << "[3] Zamknij program\n" << endl;
    cout << "Prosze podac opcje: " << endl;
    int a;
    cin >> a;

    switch (a) {
        case 0:
            takeOrder();
            break;
    }
}




int main() {
  start();
}
