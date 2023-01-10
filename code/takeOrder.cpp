#include <iostream>
#include <fstream>
#include "helpFunctions.h"
#include "main.h"

using namespace std;

void menu(){
    string pathPizza = "../data/menu/pizza.txt";
    string pathBurgers = "../data/menu/burgers.txt";
    string pathNapoje = "../data/menu/napoje.txt";
    string pathAlkohole = "../data/menu/alkohole.txt";

    string pizza, burgers, napoje, alkohole;

    drawLine(22, false);
    cout << "MENU";
    drawLine(22, true);

    ifstream filePizza;
    filePizza.open(pathPizza);
    if(!filePizza){
        cout << "Blad(2)";
    } else{
        while(getline(filePizza, pizza)) {
            cout << "|     ";
            cout << pizza;
            cout << "      |" << endl;
        }
        cout << "|                                                  |" << endl;
        filePizza.close();
    }

    ifstream fileBurgers;
    fileBurgers.open(pathBurgers);
    if(!fileBurgers){
        cout << "Blad(2)";
    } else{
        while(getline(fileBurgers, burgers)) {
            cout << "|     ";
            cout << burgers;
            cout << "      |" << endl;
        }
        cout << "|                                                  |" << endl;
        fileBurgers.close();
    }

    ifstream fileNapoje;
    fileNapoje.open(pathNapoje);
    if(!fileNapoje){
        cout << "Blad(2)";
    } else{
        while(getline(fileNapoje, napoje)) {
            cout << "|     ";
            cout << napoje;
            cout << "      |" << endl;
        }
        cout << "|                                                  |" << endl;
        fileNapoje.close();
    }

    ifstream fileAlkohole;
    fileAlkohole.open(pathAlkohole);
    if(!fileAlkohole){
        cout << "Blad(2)";
    } else{
        while(getline(fileAlkohole, alkohole)) {
            cout << "|     ";
            cout << alkohole;
            cout << "      |" << endl;
        }
        fileAlkohole.close();
    }
    drawLine(51, true);
}

void takeOrder() {
    menu();
    cout << "Wybierz pozycje[1-12] albo zrezegnuj[0]:" << endl;
    int a;
    cin >> a;

    switch (a) {
        case 0:
            start();
            break;
    }
}

