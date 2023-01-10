#include <iostream>
#include <fstream>

using namespace std;

void drawLine(int width, bool endlT) {
    for (int i = 0; i <= width; i++) {
        cout << "-";
    }
    if (endlT) {
        cout << endl;
    }
}

string getFromSetup(const string& klucz)
{
    string path = "../data/setup.txt";
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


