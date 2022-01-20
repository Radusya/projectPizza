#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string getFromSetup(const string& klucz)
{
    string path = "..\\data\\setup.txt";
    string save;

    ifstream name;
    name.open(path);
    if(!name){
        cout << "Blad(1)";
    } else{
        while(!name.eof()){
            name >> save;
            if(save == klucz){
                name.ignore(100, '=');
                getline(name, save);
                break;
            }
        }
    }
    name.close();
    return save;
}

void drawLine(int width, bool endlT){
    for(int i=0; i <= width; i++){
        cout << "-";
    }
    if(endlT == true){
        cout << endl;
    }
}


 void menu(){
     string pathPizza = "..\\data\\menu\\pizza.txt";
     string pathBurgers = "..\\data\\menu\\burgers.txt";
     string pathNapoje = "..\\data\\menu\\napoje.txt";
     string pathAlkohole = "..\\data\\menu\\alkohole.txt";

     string pizza, burgers, napoje, alkohole;

     drawLine(22, false);
     cout << "MENU";
     drawLine(22, true);

     ifstream filePizza;
     filePizza.open(pathPizza);
     if(!filePizza){
         cout << "Blad(2)";
     } else{
         while(!filePizza.eof()){
             getline(filePizza, pizza);
             cout << pizza << endl;
         }
         filePizza.close();
     }

     ifstream fileBurgers;
     fileBurgers.open(pathBurgers);
     if(!fileBurgers){
         cout << "Blad(2)";
     } else{
         while(!fileBurgers.eof()){
             getline(fileBurgers, alkohole);
             cout << alkohole << endl;
         }
         fileBurgers.close();
     }

     ifstream fileNapoje;
     fileNapoje.open(pathNapoje);
     if(!fileNapoje){
         cout << "Blad(2)";
     } else{
         while(!fileNapoje.eof()){
             getline(fileNapoje, alkohole);
             cout << alkohole << endl;
         }
         fileNapoje.close();
     }

     ifstream fileAlkohole;
     fileAlkohole.open(pathAlkohole);
     if(!fileAlkohole){
         cout << "Blad(2)";
     } else{
         while(!fileAlkohole.eof()){
             getline(fileAlkohole, alkohole);
             cout << alkohole << endl;
         }
         fileAlkohole.close();
     }
}




int main() {
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




    return 0;
}
