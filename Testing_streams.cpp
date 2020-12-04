#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;

int main(){

    cout << "Десяткова: " << 13 << hex << " Шістнадцяткова: " << 13 << oct << " Вісімкова: " << 13 << endl;


    cout << setbase(16);
    cout << 256 << endl;
    cout << setbase (8);
    cout << 256 << endl;

    cout << setbase(10);
    cout << fixed;
    cout << "default setfill: " << setw(10) << "|||" << endl;
    cout << "Setting the fill char" << " setfill to: " << setfill('*') << setw(15) << "Something" << endl;
    cout << "Hello!" << setfill('.') << setw(20) << "Bye!" << endl;
}
